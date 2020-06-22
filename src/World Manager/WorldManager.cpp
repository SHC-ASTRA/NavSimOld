#include "WorldManager.h"

Rover* WorldManager::get_rover()
{
	return &rover;
}

void WorldManager::initialize_rover(float mass, float x_pos, float y_pos, float rotation)
{
	rover = Rover();
	rover.set_mass(mass);
	rover.set_x_pos(x_pos);
	rover.set_y_pos(y_pos);
	rover.set_rotation(rotation);
}

Tile* WorldManager::get_tileMap()
{
	return tileMap;
}

Tile* WorldManager::get_tile(float x, float y)
{
	float totalWidth = mapWidth * tileScale;
	float totalHeight = mapHeight * tileScale;
	// TODO: figure out a way to efficiently calculate whether a point is within a hexagon
	return nullptr;
}

float WorldManager::get_tileScale()
{
	return tileScale;
}

void WorldManager::initialize_tileMap(int width, int height, float scale)
{
	mapWidth = width;
	mapHeight = height;
	tileScale = scale;
	tileMap[mapWidth * mapHeight];
}

float WorldManager::get_worldTime()
{
	return worldTime;
}

float WorldManager::get_timeScale()
{
	return timeScale;
}

void WorldManager::set_timeScale(float scale)
{
	timeScale = scale;
}

void WorldManager::update_world(float timeSinceLastUpdate, bool realtime)
{
	// TODO: game loop
	// 1) Update Rover Physics
	// 2) Update Sensor Values
	// 3) Keep track of elapsed time
}
