#include <iostream>
#include <thread>
#include "Road.h"
#include "Intersection.h"
#include "TrafficController.h"

int main()
{
	Road road(100);
	Intersection intersection;
	TrafficController traffic_controller(intersection, road);

	road.add_vehicle(std::make_unique<Vehicle>(1, 2));
	road.add_vehicle(std::make_unique<Vehicle>(2, 3));
	road.add_vehicle(std::make_unique<Vehicle>(3, 4));

	for (auto& v:road.get_vehicles())
	{
		v->vehicle_drive();

		std::cout << "Step: " << v->get_vehicle_id() << std::endl;

		intersection.update_light_timer();
		road.update_road();
		traffic_controller.optimize_traffic();

		intersection.display_traffic_light_state();
		road.display_vehicle();

		std::this_thread::sleep_for(std::chrono::seconds(1));
	}

}