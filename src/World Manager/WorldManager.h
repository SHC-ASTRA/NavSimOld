#include "../Rover/Rover.h"
#include "../Environment/Tile.h"

class WorldManager {
private:
	Rover rover;
	Tile* tileMap;
	int mapWidth;
	int mapHeight;
	float tileScale;
	float worldTime = 0.0f;
	float timeScale = 1.0f;

public:
	Rover* get_rover();
	void initialize_rover(float mass, float x_pos, float y_pos, float rotation);

	Tile* get_tileMap();
	Tile* get_tile(float x, float y);
	float get_tileScale();
	void initialize_tileMap(int width, int height, float scale);

	float get_worldTime();
	float get_timeScale();
	void set_timeScale(float scale);

	void update_world(float timeSinceLastUpdate, bool realtime = true);
};