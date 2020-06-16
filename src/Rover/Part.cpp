#include "Part.h"


float Part::get_rel_x()
{
	return rel_x;
}

float Part::get_rel_y()
{
	return rel_y;
}

void Part::set_rel_pos(float x, float y)
{
	rel_x = x;
	rel_y = y;
}
