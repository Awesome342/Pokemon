#include "MapManager.h"

MapManager::MapManager()
{
    Maps[1].loadFiles("data/Maps/PNG/Village1.png", 0, 0, 0, 0, 0, 0, 0, 0);
}

void MapManager::draw( SDL_Surface *Screen )
{
    Maps[1].draw( Screen );
}
