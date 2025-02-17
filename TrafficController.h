#ifndef TRAFFICCONTROLLER_H
#define TRAFFICCONTROLLER_H

#include <iostream>
#include "Intersection.h"
#include "Road.h"

class TrafficController
{
public:
	TrafficController(Intersection& _intersection, Road& _road);
	Intersection& intersection;
	Road& road;

	void optimize_traffic();
};

#endif //TRAFFICCONTROLLER_H