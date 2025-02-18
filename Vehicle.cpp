#include "Vehicle.h"

Vehicle::Vehicle(int _id, int _speed)
{
	vehicle_id = _id;
	vehicle_position = 0;
	vehicle_speed = _speed;
	vehicle_stopped = false;
}

void Vehicle::vehicle_move()
{
	if (!vehicle_stopped)
	{
		vehicle_position += 2 + (vehicle_id % 3);
		std::cout << "Vehicle " << vehicle_id << " is moving." << std::endl;
		std::cout << "New position: " << vehicle_position << std::endl;
	}
	else
	{
		std::cout << "Vehicle " << vehicle_id << " is stopped." << std::endl;
	}
}
void Vehicle::vehicle_stop()
{
	vehicle_stopped = true;
	std::cout << "Vehicle " << vehicle_id << " has stopped." << std::endl;
}
void Vehicle::vehicle_drive()
{
	vehicle_stopped = false;
	std::cout << "Vehicle " << vehicle_id << " is driving again." << std::endl;
}

int Vehicle::get_vehicle_id() const
{
	return vehicle_id;
}
int Vehicle::get_vehicle_position() const
{
	return vehicle_position;
}
int Vehicle::get_vehicle_speed() const
{
	return vehicle_speed;
}
bool Vehicle::is_vehicle_stopped() const
{
	return vehicle_stopped;
}