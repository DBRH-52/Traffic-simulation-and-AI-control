#include <iostream>
#include <thread>
#include <cstdlib>
#include <ctime>
#include "Road.h"
#include "Intersection.h"
#include "TrafficController.h"

int main()
{
	srand(time(0));

	Road road(100);
	Intersection intersection;
	TrafficController traffic_controller(intersection, road);

	road.add_vehicle(std::make_unique<Vehicle>(1, 2, &intersection.traffic_light));
	road.add_vehicle(std::make_unique<Vehicle>(2, 3, &intersection.traffic_light));
	road.add_vehicle(std::make_unique<Vehicle>(3, 4, &intersection.traffic_light));

	//for (auto& v:road.get_vehicles())
	for(int step=0; step<20; step++)
	{
		//v->vehicle_drive();

		std::cout << "Step: " << step+1 << std::endl;

		intersection.update_light_timer();
		traffic_controller.optimize_traffic();
		road.update_road();
		intersection.display_traffic_light_state();
		road.display_vehicle();

		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	return 0;
}