#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
private:
	int vehicle_id;
	int vehicle_position;
	int vehicle_speed;
	bool vehicle_stopped;

public:
	Vehicle(int _id, int _speed);

	void vehicle_move();
	void vehicle_stop();
	void vehicle_drive();

	int get_vehicle_id() const;
	int get_vehicle_position() const;
	int get_vehicle_speed() const;
	bool is_vehicle_stopped() const;
};

#endif //VEHICLE_H