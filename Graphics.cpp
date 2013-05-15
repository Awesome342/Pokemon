#include "Graphics.h"

Graphics::Graphics()
{
    Screen = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE );
}

void Graphics::draw()
{
    Knight.getInput();

    Map.draw( Screen );
    Knight.draw( Screen );

    SDL_Flip( Screen );
}

Graphics::~Graphics()
{
    SDL_FreeSurface( Screen );
}
