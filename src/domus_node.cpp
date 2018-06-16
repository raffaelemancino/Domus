#include "ros/ros.h"
#include "std_msgs/String.h"
#include "light.hpp"
#include "sender.hpp"
#include <sstream>

int main(int argc, char **argv)
{
	ros::init(argc, argv, "domus");
	ros::NodeHandle n;
	ros::Publisher chatter_pub = n.advertise<std_msgs::String>("dom", 1000);
	ros::Rate loop_rate(1); // 1 messaggio al secondo
	ROS_INFO("Welcome on Domus");
	Light light;
	light.up();
	light.down();
	Sender sender;
	sender.send();
	/*while(ros::ok())
	{
	}*/
	return 0;
}

