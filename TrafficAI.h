#ifndef TRAFFICAI_H
#define TRAFFICAI_H

#include <map>
#include <vector>
#include <random>

class TrafficAI
{
private:
	double learning_rate;
	double exploration_rate;
	double discount_factor;

	std::map<std::pair<int, int>, std::vector<double>> Q_table;
	std::default_random_engine generator;

public:
	TrafficAI();

	int choose_action(int traffic_light_state, int stopped_vehicles);

	void update_Q_table(int state, int next_state, int action, int reward);
};

#endif //TRAFFICAI_H