#include "Motor.h"

class Rover {
private:
	float mass;
	float x_pos;
	float y_pos;
	float rotation;
	Motor* motors;

public:

	//the rover information getters and setters will be used by the world controller
	
	float get_mass();
	void set_mass(float m);

	float get_x_pos();
	void set_x_pos(float x);

	float get_y_pos();
	void set_y_pos(float y);

	float get_rotation();
	void set_rotation(float r);

	Motor* get_motors();


	


};