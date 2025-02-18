#include "Intersection.h"

void Intersection::update_light_timer()
{
	traffic_light.increment_traffic_light_timer();
	if (traffic_light.get_traffic_light_timer() >= 5)
	{
		traffic_light.change_traffic_light_state();
		traffic_light.reset_traffic_light_timer();
	}
	std::cout << "Updated traffic light state: " << traffic_light.get_current_traffic_light_state() << std::endl;
}
void Intersection::display_traffic_light_state()
{
	std::cout << "Traffic light state: " << traffic_light.get_current_traffic_light_state() << std::endl;
}