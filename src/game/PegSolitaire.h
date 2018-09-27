#ifndef DEMO_PEGSOLITARE_H
#define DEMO_PEGSOLITARE_H

#include <array>
#include <string>
#include "State.h"
#include "GameInterface.h"


class PegSolitaire: public GameInterface  {

private:
    State state = State(7, 7);

public:
    enum BoardType : char {
        ENGLISH_BOARD = '1'
    };

    enum Peg : int {
        PEG = 1, NO_PEG = 0, INVALID = 2
    };

    int peg_count() const;

    void init_state(BoardType type);

    void makeMove() override;
    State getState() const override;
    bool isFinished() const override;

};


#endif
