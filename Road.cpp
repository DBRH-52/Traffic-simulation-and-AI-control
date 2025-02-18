#include "Road.h"

Road::Road(int _length) : road_length(_length)
{
}
std::vector<std::unique_ptr<Vehicle>>& Road::get_vehicles()
{
	return vehicles;
}

void Road::add_vehicle(std::unique_ptr<Vehicle> vehicle)
{
	//vehicles.push_back(vehicle);
	vehicles.push_back(std::move(vehicle));
}
void Road::update_road()
{
	for (auto& v : get_vehicles())
	{
		v->vehicle_move();
	}
}
void Road::display_vehicle()
{
	for (auto& v : get_vehicles())
	{
		std::cout << "Vehicle " << v->get_vehicle_id() << " - position " << v->get_vehicle_position() << std::endl;
	}
}

/*Road::~Road()
{
	for (auto v : vehicles)
	{
		delete v;
	}
}*/