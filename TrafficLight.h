#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <iostream>
#include <string>

class TrafficLight
{
private:
	int traffic_light_timer;
	enum Traffic_Light_state {RED, YELLOW, GREEN};
	Traffic_Light_state current_traffic_light_state;

public:
	TrafficLight();

	void change_traffic_light_state();
	std::string get_current_traffic_light_state();
	void reset_traffic_light_timer();

	int get_traffic_light_timer() const;
};

#endif //TRAFFICLIGHT_H