
enum terrain_type { obstacle, clear };
//the terrain_type enum will later be expanded to hold other types - sandy, sloped, rocky, etc. 
//alternately, it may be depricated in favor of specifying the terrain properities directly to create unique (eg: 0.2 obstacle, 0.4 friction, 0.1 slope, etc.) 

class Tile {

private:
	terrain_type terrain;

public:
	Tile(terrain_type t);
	terrain_type get_terrain();

		
};