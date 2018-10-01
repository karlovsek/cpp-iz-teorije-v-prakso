#include "BFSSolver.h"
#include <iostream>
void BFSSolver::solve() {

    solution.push_back(game.getInitialState());

    int count= 0;
    while (true) {
        // get copy of the last state
        State state = game.getNextState(solution.back());

        count++;
        if (game.isComplete(state)) {
            break;
        }

        if (game.isFinished(state)) {
            solution.pop_back();
            continue;
        }

        solution.push_back(state);
    }

    std::cout << "Solution found at " << count << "\n";
}

BFSSolver::BFSSolver(PegSolitaire _game) : game(_game) {

}

