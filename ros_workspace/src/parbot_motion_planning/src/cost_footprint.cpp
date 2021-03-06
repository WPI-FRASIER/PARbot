#include "cost_footprint.h"

cost_footprint::cost_footprint(double _c_max, double _r_max, double _grid_size)
{
    c_max = _c_max;
    r_max = _r_max;
    grid_size = _grid_size;
    make_grid();
};

bool cost_footprint::is_unique(cost_polar_point point, std::vector<cost_polar_point> cost_points)
{
    for(int i=0; i<cost_points.size(); i++)
    {
        if(cost_points[i].point.r == point.point.r &&
            cost_points[i].point.theta == point.point.theta)
            return false;
    }
    return true;
}


void cost_footprint::make_grid()
{
    int num_rads = round(r_max/grid_size)+1;
    //ROS_INFO("num rads = %d", num_rads);
    int num_segments = 360;
    double delta_theta = 2*pi/num_segments;
    double theta = (-1*pi);
    double r = 0;
    std::vector<cost_polar_point> polar_points = std::vector<cost_polar_point>(num_rads*num_segments);
    for(int i=0; i<num_rads; i++)
    {
        r = grid_size*i;
        //ROS_INFO("r = %f", r);
	double theta = (-1*pi);
        for(int j=0; j<num_segments; j++)
        {
            theta += delta_theta;
            cost_polar_point p_point;
            p_point.point.r = r;
            p_point.point.theta = theta;
            p_point.cost = cost_fun(r);
            //ROS_INFO("R %f Theta %f Cost = %f", p_point.point.r, p_point.point.theta, p_point.cost);
            polar_points[i*num_segments+j] = p_point;
            //std::cout << p_point.point.r << "," << p_point.point.theta <<"\n";
            if(i==0)
            {
                break;
            }
        }
    }
    //ROS_INFO("r = %f", r);
    //cost_points = polar_cost_grid(polar_points);
    //print_footprint();
	//ROS_INFO("%d polar points", (int)polar_points.size());
	int unique_count = 0;
	std::vector<cost_polar_point> polar_unique_points = std::vector<cost_polar_point>(0);
	for(int i=0; i<polar_points.size(); i++)
	{
		cost_polar_point current_point = polar_points[i];
		if(is_unique(current_point, polar_unique_points))	
		{
			polar_unique_points.resize(unique_count+1);
			polar_unique_points[unique_count] = current_point;
			unique_count++;
		}
	}

	cost_points = polar_cost_grid(polar_unique_points);
}

double cost_footprint::cost_fun(double r)
{
    return c_max*pow((1-(r/r_max)),2);
}

std::vector<cost_grid_point> cost_footprint::points_from_point(grid_cart_point start_point)
{
    std::vector<cost_grid_point> output_points = std::vector<cost_grid_point>(cost_points.size());
    for(int i=0; i<output_points.size(); i++)
    {
        cost_grid_point new_point;
        new_point.point.x = start_point.x + cost_points[i].point.x;
        new_point.point.y = start_point.y + cost_points[i].point.y;
        new_point.cost = cost_points[i].cost;
        output_points[i] = new_point;
    }
    return output_points;
}

void cost_footprint::print_footprint()
{
    for(int i=0; i<cost_points.size(); i++)
    {
        print_grid_cart_point_endline(cost_points[i].point);
    }
}
