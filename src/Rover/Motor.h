#include "Part.h"

class Motor : public Part {
private:
	float speed; 
	//this speed is directional (can be negative), but is not called velocity so as not to confuse with the rover's physics properties. 

	//in the future, instead of speed, this could hold power. Then the motor iteself can decide how much speed to output given the power.
	//This will allow us to generate a little noise here, if we want, because no motor will ever output a perfect speed every time

public:
	Motor(float x, float y);
	~Motor();
	
	float get_speed();
	void set_speed(float s);
	//at first, the world will use set_speed directly for WASD control
	// later, the ROS code should be the only module to interact with this directly

	


};