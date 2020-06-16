class Part {
private:

	//rel_x and rel_y are for the relative x and y positions to the rover's center
	float rel_x;
	float rel_y;

	//later, we may implement a separate mass for each part

public:

	float get_rel_x();
	float get_rel_y();

	void set_rel_pos(float x, float y);
	

};