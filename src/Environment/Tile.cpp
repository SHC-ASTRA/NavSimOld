#include "Tile.h"

Tile::Tile(terrain_type t)
{
	terrain_type = t;
}

terrain_type Tile::get_terrain()
{
	return terrain_type();
}
