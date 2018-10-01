#ifndef DEMO_BFSSOLVER_H
#define DEMO_BFSSOLVER_H

#include <vector>

#include "../game/State.h"
#include "../game/PegSolitaire.h"


class BFSSolver {
private:
    PegSolitaire game;

public:
    BFSSolver(PegSolitaire game);
    std::vector<State> solution = {};
    void solve();
};

#endif //DEMO_BFSSOLVER_H
