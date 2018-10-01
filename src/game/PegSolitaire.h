#ifndef DEMO_PEGSOLITARE_H
#define DEMO_PEGSOLITARE_H

#include <array>
#include <string>
#include "State.h"


class PegSolitaire {


public:
    enum BoardType : char {
        ENGLISH_BOARD = '1'
    };
    enum Direction : int {
        UP = 3, DOWN = 0, LEFT = 1, RIGHT = 2
    };
    enum Peg : int {
        PEG = 1, NO_PEG = 0, INVALID = 2
    };

    int pegCount(State state) const;
    int type;

    explicit PegSolitaire(BoardType _type);

    State getInitialState() const;

    State getNextState(State &state) const;

    bool isFinished(const State &state) const;

    bool isComplete(const State &state) const;

};


#endif
