#include "Motor.h"

Motor::Motor(float x, float y)
{
	speed = 0;
	rel_x = x;
	rel_y = y;
}

Motor::~Motor() 
{

}

float Motor::get_speed()
{
	return speed;
}

void Motor::set_speed(float s)
{
	speed = s;
}

