#ifndef MAP_H
#define MAP_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

class Map
{
    public:
        void loadFiles( const char* filename, int c1x, int c1y, int c1w, int c1h, int w1x, int w1y, int w1w, int w1h );
        bool checkColl( SDL_Rect Player );
        void draw( SDL_Surface *Screen );

    private:
        SDL_Rect Coll1;
        SDL_Rect Warp1;
        SDL_Surface *Img;
};

#endif
