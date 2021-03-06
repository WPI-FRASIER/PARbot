#include "motion_planning_structures.h"
#include "nav_msgs/OccupancyGrid.h"

#define SUB_TOPIC "local_map"
#define THRESHOLD 50

class Map_Handler{
public:
    Map_Handler(ros::NodeHandle n);
    std::vector<grid_cart_point> get_points();
	bool ready();
private:
    std::vector<grid_cart_point> points;
    ros::Subscriber map_sub;
	bool got_map;

    std::vector<grid_cart_point> convert_occupancy_grid(nav_msgs::OccupancyGrid msg);

    void mapCallback(const nav_msgs::OccupancyGrid::ConstPtr &msg);
};
