#include "ros/ros.h"
#include <tf/transform_listener.h>
#include "nav_msgs/OccupancyGrid.h"
#include "parbot_motion_planning/CostPointStamped.h"
#include <math.h>
#include "motion_planning_structures.h"

#define TARGET_FRAME "base_footprint"
#define BOX_SIZE 6 //the size of the map in x and y with origin at center
#define THRESHOLD 50

/*
shrinks the map and moves the origin to the target_frame frame
*/
class Map_Shrinker{
public:
    Map_Shrinker(double _threshold=THRESHOLD, double _box_size=BOX_SIZE, std::string _target_frame=std::string(TARGET_FRAME));

    std::vector<parbot_motion_planning::CostPointStamped> get_close_tfd_points(nav_msgs::OccupancyGrid map_msg); //only points above threshold
    nav_msgs::OccupancyGrid get_shrunk_map();
    nav_msgs::OccupancyGrid shrink_map(nav_msgs::OccupancyGrid map_msg);
    std::vector<cart_point> get_cart_points(nav_msgs::OccupancyGrid map_msg);
private:
    nav_msgs::OccupancyGrid shrunk_map;
    double box_size, threshold, grid_size;
    std::string target_frame;
    tf::TransformListener tf_listener;
    int x_offset, y_offset;

    std::vector<parbot_motion_planning::CostPointStamped> convert_occupancy_grid(nav_msgs::OccupancyGrid grid); // returns known points
    //points in the box
    std::vector<parbot_motion_planning::CostPointStamped> get_close_points(std::vector<parbot_motion_planning::CostPointStamped> all_points);
    std::vector<parbot_motion_planning::CostPointStamped> transform_points(std::vector<parbot_motion_planning::CostPointStamped> points);
    void setup_map_msg(nav_msgs::OccupancyGrid old_msg);
    void add_to_map(parbot_motion_planning::CostPointStamped point);
    void add_to_map(std::vector<parbot_motion_planning::CostPointStamped> points);
    void make_map_msg(nav_msgs::OccupancyGrid old_msg);
    parbot_motion_planning::CostPointStamped transform_point(parbot_motion_planning::CostPointStamped point);
    cart_point CPS_to_cart(parbot_motion_planning::CostPointStamped point);
    std::vector<cart_point> CPS_to_cart(std::vector<parbot_motion_planning::CostPointStamped
        > points);
};
