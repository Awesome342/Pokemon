#include "MapManager.h"

MapManager::MapManager()
{
    Maps[0].loadFiles("data/Maps/PNG/Village1.png", 256, 192, 96, 64, 288, 256, 32, 32);
    Maps[1].loadFiles("data/Maps/PNG/House1.png", 0, 0, 0, 0, 0, 0, 0, 0);
    currentMap = 0;
}

void MapManager::draw( SDL_Surface *Screen )
{
    if ( currentMap == 0 )
    {
        Maps[0].draw( Screen );
    }
    if ( currentMap == 1 )
    {
        Maps[1].draw( Screen );
    }
}

void MapManager::Update( SDL_Rect Player )
{
    PlayerMapComm.open("data/Map_PlayerIO.txt");
    if ( Maps[0].checkColl( Player ) )
    {
        PlayerMapComm << "01";
    }
    else
    {
        PlayerMapComm << "00";
    }

    if ( Maps[0].checkWarp( Player ) )
    {
        currentMap = 1;
        PlayerMapComm << "00";
    }

    PlayerMapComm.close();
}
