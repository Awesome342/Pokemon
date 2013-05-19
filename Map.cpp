#include "Map.h"

void Map::loadFiles( const char* filename, int c1x, int c1y, int c1w, int c1h, int w1x, int w1y, int w1w, int w1h )
{
    Img = IMG_Load(filename);
    Coll1.x = c1x;
    Coll1.y = c1y;
    Coll1.w = c1w;
    Coll1.h = c1h;
    Warp1.x = w1x;
    Warp1.y = w1y;
    Warp1.w = w1w;
    Warp1.h = w1h;
}

bool Map::checkColl( SDL_Rect Player )
{
    if ( Coll1.x 		    <	Player.x + Player.w 	&&
		 Coll1.x + Coll1.w 	> 	Player.x 	            &&
		 Coll1.y		    <	Player.y + Player.h 	&&
		 Coll1.y + Coll1.h	>	Player.y )
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Map::checkWarp( SDL_Rect Player )
{
    if ( Warp1.x 		    <	Player.x + Player.w 	&&
		 Warp1.x + Warp1.w 	> 	Player.x 	            &&
		 Warp1.y		    <	Player.y + Player.h 	&&
		 Warp1.y + Warp1.h	>	Player.y )
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Map::draw( SDL_Surface *Screen )
{
    SDL_BlitSurface( Img, NULL, Screen, NULL );
}
