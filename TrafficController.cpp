#include "TrafficController.h"

TrafficController::TrafficController(Intersection& _intersection, Road& _road)
	: intersection(_intersection), road(_road)
{
}

void TrafficController::optimize_traffic()
{
	std::string traffic_light_state = intersection.display_traffic_light_state();
	
	std::cout << "Optimizing traffic with traffic light state: " << traffic_light_state << std::endl;
	
	for (auto& v : road.get_vehicles())
	{
		if (traffic_light_state == "RED")

		{	
			if (!v->is_vehicle_stopped())
			{
				v->vehicle_stop();
				std::cout << traffic_light_state << "! Vehicle: " << v->get_vehicle_id() << " has stopped." << std::endl;
			}
		}
		else if (traffic_light_state == "GREEN" || traffic_light_state == "YELLOW")
		{
			if (v->is_vehicle_stopped())
			{
				v->vehicle_drive();
				std::cout << traffic_light_state << "! Vehicle: " << v->get_vehicle_id() << " is driving again." << std::endl;
			}
		}
	}
}