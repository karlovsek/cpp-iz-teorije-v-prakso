//
// Created by dparadiz on 9/27/18.
//

#ifndef DEMO_GAMEINTERFACCE_H
#define DEMO_GAMEINTERFACCE_H

#include "State.h"


class GameInterface {

public:
    virtual void makeMove() = 0;

    virtual State getState() const = 0;

    virtual bool isFinished() const = 0;
};


#endif //DEMO_GAMEINTERFACCE_H
