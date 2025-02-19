#include "TrafficAI.h"

TrafficAI::TrafficAI()
{
	learning_rate = 0.1;
	exploration_rate = 0.2;
	discount_factor = 0.2;
}

int TrafficAI::choose_action(int traffic_light_state, int stopped_vehicles)
{
	/*
	generator -- explo rate
	*/
}

void TrafficAI::update_Q_table(int state, int next_state, int action, int reward)
{

}