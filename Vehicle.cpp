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
		vehicle_position += vehicle_speed;
	}
}
void Vehicle::vehicle_stop()
{
	vehicle_stopped = true;
}
void Vehicle::vehicle_drive()
{
	vehicle_stopped = false;
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