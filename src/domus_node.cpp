#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char **argv)
{
	ros::init(argc, argv, "domus");
	ros::NodeHandle n;
	ros::Publisher chatter_pub = n.advertise<std_msgs::String>("dom", 1000);
	ros::Rate loop_rate(1); //10 Hz di rate 10 messaggi al secondo
	ROS_INFO("Welcome on Domus");
	
	while(ros::ok())
	{
		
	}
	return 0;
}

