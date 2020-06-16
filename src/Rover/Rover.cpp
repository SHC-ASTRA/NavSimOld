#include "Rover.h"

float Rover::get_mass()
{
	return mass;
}

void Rover::set_mass(float m)
{
	mass = m;
}

float Rover::get_x_pos()
{
	return x_pos;
}

void Rover::set_x_pos(float x)
{
	x_pos = x;
}

float Rover::get_y_pos()
{
	return y_pos;
}

void Rover::set_y_pos(float y)
{
	y_pos = y;
}

float Rover::get_rotation()
{
	return rotation;
}

void Rover::set_rotation(float r)
{
	rotation = r;
}

Motor [] Rover::get_motors()
{
	return motors;
}

