//
//  utils.hpp
//  SDL Tutorial
//
//  Created by Andy Gutierrez on 4/5/24.
//

#pragma once

#include <SDL2/SDL.h>

namespace utils
{
    inline float hireTimeInSeconds()
    {
        float t = SDL_GetTicks();
        t *= 0.001f;
        
        return t;
    }
}
