#include "TrafficController.h"

void TrafficController::optimize_traffic()
{
	int waiting_vehicles = 0;
	for (auto& v : road.vehicles)
	{
		if (v.vehicle_stopped)
		{
			waiting_vehicles++;
		}
	}
	if (waiting_vehicles > 5)
	{
		intersection.traffic_light.traffic_light_timer = 3;
	}
}