#include "TrafficLight.h"

TrafficLight::TrafficLight()
{
	current_traffic_light_state = RED;
	traffic_light_timer = 0;
}

void TrafficLight::change_traffic_light_state()
{
	if (current_traffic_light_state == RED)
	{
		current_traffic_light_state = GREEN;
	}
	else if (current_traffic_light_state == GREEN)
	{
		current_traffic_light_state = YELLOW;
	}
	else
	{
		current_traffic_light_state = RED;
	}
}
std::string TrafficLight::get_current_traffic_light_state()
{
	switch (current_traffic_light_state)
	{
	case RED:
		return "RED";
	case YELLOW:
		return "YELLOW";
	case GREEN:
		return "GREEN";
	default:
		return "UNKNOWN";
	}
}
void TrafficLight::reset_traffic_light_timer()
{
	traffic_light_timer = 0;
}

int TrafficLight::get_traffic_light_timer() const
{
	return traffic_light_timer;
}