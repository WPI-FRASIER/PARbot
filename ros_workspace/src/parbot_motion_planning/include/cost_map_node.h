#include "cost_mapper.h"
#include "nav_msgs/OccupancyGrid.h"
#include "parbot_motion_planning/cost_map.h"
#include "parbot_motion_planning/cost_map_2.h"

#define THRESHOLD 50 //determines if cell is occupied before creating node
#define COST 100
#define RAD 1
#define DEFAULT_GRID_SIZE GRID_SIZE

class cost_map_node
{
public:
    cost_map_node(ros::NodeHandle _n, double _cost=COST, double _radius=RAD, double _grid_size=DEFAULT_GRID_SIZE);

private:
    ros::NodeHandle n;
    ros::Subscriber map_sub;
    ros::Publisher cost_pub;
    ros::Publisher cost_2_pub;
    cost_mapper* mapper;
    double grid_size, cost, radius;
    std::vector<std::vector<double> > occupancy_grid;
	bool got_message;

    void mapCallback(const nav_msgs::OccupancyGrid::ConstPtr &msg);
    std::vector<cost_point> convert_occupancy_grid(nav_msgs::OccupancyGrid grid);

	void csv_print();
};
