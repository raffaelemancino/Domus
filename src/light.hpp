#ifndef LIGHT
#define LIGHT

#include "ros/ros.h"
#include "std_msgs/String.h"

class Light
{
	public:
		void up();
		void down();
	private:
		int n;
};

#endif /*LIGHT*/
