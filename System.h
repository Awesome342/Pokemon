#ifndef SYSTEM_H
#define SYSTEM_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "Graphics.h"

class System
{
    public:
        System();
        void Update();

    private:
        bool quit;
        SDL_Event event;
        Graphics Sprite;
};

#endif
