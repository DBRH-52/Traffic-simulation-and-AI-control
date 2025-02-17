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

	//road.add_vehicle(Vehicle(1, 2));
	//road.add_vehicle(Vehicle(2, 3));
	//road.add_vehicle(Vehicle(3, 4));

	for (int i = 0; i < 20; i++)
	{
		std::cout << "Step: " << i << std::endl;

		intersection.update_light_timer();
		road.update_road();
		traffic_controller.optimize_traffic();

		intersection.display_traffic_light_state();
		road.display_vehicle();

		std::this_thread::sleep_for(std::chrono::seconds(1));
	}

}