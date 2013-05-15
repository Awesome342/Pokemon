#ifndef MAPMANAGER_H
#define MAPAMANGER_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "Map.h"

class MapManager
{
    public:
        MapManager();
        void draw( SDL_Surface *Screen );

    private:
        Map Maps[1];
};

#endif
