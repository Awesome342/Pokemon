#ifndef MAPMANAGER_H
#define MAPAMANGER_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "Map.h"
#include <fstream>

class MapManager
{
    public:
        MapManager();
        void draw( SDL_Surface *Screen );
        void Update( SDL_Rect Player );

    private:
        Map Maps[2];
        std::ofstream PlayerMapComm;
        int currentMap;
};

#endif
