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
        Pos.x += 3;
        Clip.y = 144;
    }
    if ( key[SDLK_LEFT] )
    {
        Pos.x -= 3;
        Clip.y = 96;
    }
    if ( key[SDLK_UP] )
    {
        Pos.y -= 3;
        Clip.y = 48;
    }
    if ( key[SDLK_DOWN] )
    {
        Pos.y += 3;
        Clip.y = 0;
    }

    //Communicate with Map
    PlayerMapComm.open("data/Map_PlayerIO.txt");
    PlayerMapComm >> IsColl;
    if ( IsColl == 01 )
    {
        if ( Clip.y == 144 )
        {
            Pos.x -= 3;
        }
        if ( Clip.y == 96 )
        {
            Pos.x += 3;
        }
        if ( Clip.y == 48 )
        {
            Pos.y += 3;
        }
        if ( Clip.y == 0 )
        {
            Pos.y -= 3;
        }
    }
    PlayerMapComm.close();
}

SDL_Rect Player::returnRect()
{
    return Pos;
}

Player::~Player()
{
    SDL_FreeSurface( Img );
}
