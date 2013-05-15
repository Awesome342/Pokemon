#include "Player.h"

Player::Player()
{
    Img = IMG_Load("data/Baurn_Moosader.png");
    Pos.x = 0;
    Pos.y = 0;
    Pos.w = 32;
    Pos.h = 48;
    Clip.x = 0;
    Clip.y = 0;
    Clip.w = 32;
    Clip.h = 48;
}

void Player::draw( SDL_Surface *Screen )
{
    SDL_BlitSurface( Img, &Clip, Screen, &Pos );
}

void Player::getInput()
{
    key = SDL_GetKeyState( NULL );
    if ( key[SDLK_RIGHT] )
    {
        Pos.x += 1;
    }
    if ( key[SDLK_LEFT] )
    {
        Pos.x -= 1;
    }
    if ( key[SDLK_UP] )
    {
        Pos.y -= 1;
    }
    if ( key[SDLK_DOWN] )
    {
        Pos.y += 1;
    }
}

Player::~Player()
{
    SDL_FreeSurface( Img );
}
