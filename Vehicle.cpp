#include "Vehicle.h"

Vehicle::Vehicle(int _id, int _speed, TrafficLight* _traffic_light)
{
	vehicle_id = _id;
	vehicle_position = 0;
	vehicle_speed = _speed;
	vehicle_stopped = false;
	traffic_light = _traffic_light;
}

/*void Vehicle::set_traffic_light_state(TrafficLight* _traffic_light)
{
	traffic_light_state = _traffic_light_state;
}*/

void Vehicle::vehicle_move()
{
	if (!vehicle_stopped)
	{
		//auto current_traffic_light_state = traffic_light->get_current_traffic_light_enum();
		//std::string current_traffic_light_state = traffic_light->get_current_traffic_light_enum();
		TrafficLight::Traffic_Light_state current_traffic_light_state = traffic_light->get_current_traffic_light_enum();
		if (current_traffic_light_state == TrafficLight::GREEN)
		{ 
			vehicle_position += 2 + (vehicle_id % 3);
			vehicle_position += vehicle_speed;
		}
		else if (current_traffic_light_state == TrafficLight::YELLOW)
		{
			vehicle_speed = std::max(vehicle_speed - 1, 1);
			vehicle_position += vehicle_speed;
		}
		else if (current_traffic_light_state == TrafficLight::RED)
		{
			vehicle_speed = 0;
			vehicle_position += vehicle_speed;
		}
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