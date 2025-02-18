#ifndef ROAD_H
#define ROAD_H

#include <iostream>
#include <vector>
#include <memory>
#include "Vehicle.h"

class Road
{
private:
	int road_length;
	//std::vector<Vehicle*> vehicles; // a moze lepiej shared_ptr albo unique_ptr?
	std::vector<std::unique_ptr<Vehicle>> vehicles;
public:
	Road(int _length);
	//~Road();

	void add_vehicle(std::unique_ptr<Vehicle> vehicle);
	void update_road();
	void display_vehicle();

	//std::vector<Vehicle*>& get_vehicles();
	std::vector<std::unique_ptr<Vehicle>>& get_vehicles();
};

#endif //ROAD_H