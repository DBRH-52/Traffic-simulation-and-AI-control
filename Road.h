#ifndef ROAD_H
#define ROAD_H

#include <iostream>
#include <vector>
#include "Vehicle.h"

class Road
{
private:
	int road_length;
	std::vector<Vehicle> vehicles;

public:
	Road(int _length);

	void add_vehicle(Vehicle vehicle);
	void update_road();
	void display_vehicle();

	const std::vector<Vehicle>& get_vehicles() const;
};

#endif //ROAD_H