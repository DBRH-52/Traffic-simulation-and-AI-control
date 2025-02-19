#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "TrafficLight.h"

class Vehicle
{
private:
	int vehicle_id;
	int vehicle_position;
	int vehicle_speed;
	bool vehicle_stopped;

	TrafficLight* traffic_light;

public:
	Vehicle(int _id, int _speed, TrafficLight* _traffic_light);

	void vehicle_move();
	void vehicle_stop();
	void vehicle_drive();
	//void set_traffic_light_state(TrafficLight* _traffic_light);

	int get_vehicle_id() const;
	int get_vehicle_position() const;
	int get_vehicle_speed() const;
	bool is_vehicle_stopped() const;

	int get_random_speed();
};

#endif //VEHICLE_H