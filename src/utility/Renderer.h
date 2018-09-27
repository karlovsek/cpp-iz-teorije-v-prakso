//
// Created by dparadiz on 9/27/18.
//

#ifndef DEMO_RENDERER_H
#define DEMO_RENDERER_H

#include <string>

#include "../game/State.h"

class Renderer {

public:
    static std::string render(const State &state);
};


#endif //DEMO_RENDERER_H
