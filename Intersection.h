#ifndef INTERSECTION_H
#define INTERSECTION_H

#include <iostream>
#include "TrafficLight.h"

class Intersection
{
public:
	//Intersection();
	TrafficLight traffic_light;

	void update_light_timer();
	std::string display_traffic_light_state();
};

#endif //INTERSECTION_H