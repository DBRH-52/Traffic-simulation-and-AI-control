#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <iostream>
#include <string>

class TrafficLight
{
private:
	int traffic_light_timer;


public:
	TrafficLight();

	enum Traffic_Light_state { RED, YELLOW, GREEN };
	Traffic_Light_state current_traffic_light_state;

	void change_traffic_light_state();
	std::string get_current_traffic_light_state();
	void reset_traffic_light_timer();

	void increment_traffic_light_timer();

	int get_traffic_light_timer() const;

	Traffic_Light_state get_current_traffic_light_enum() const;
};

#endif //TRAFFICLIGHT_H