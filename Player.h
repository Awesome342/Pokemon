#ifndef PLAYER_H
#define PLAYER_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

class Player
{
    public:
        Player();
        ~Player();
        void draw( SDL_Surface *Screen );
        void getInput();

    private:
        Uint8 *key;
        SDL_Surface *Img;
        SDL_Rect Pos;
        SDL_Rect Clip;
};

#endif
