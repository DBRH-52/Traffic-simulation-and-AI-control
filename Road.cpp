#include "Road.h"

Road::Road(int _length) : road_length(_length)
{
}

void Road::add_vehicle(Vehicle vehicle)
{
	vehicles.push_back(vehicle);
}
void Road::update_road()
{
	for (auto& v : vehicles)
	{
		v.vehicle_move();
	}
}
void Road::display_vehicle()
{
	for (auto& v : get_vehicles())
	{
		std::cout << "Vehicle " << v.get_vehicle_id() << " - position " << v.get_vehicle_position << std::endl;
	}
}

const std::vector<Vehicle>& Road::get_vehicles() const
{
	return vehicles;
}