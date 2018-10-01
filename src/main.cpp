#include "game/State.h"
#include "game/PegSolitaire.h"
#include "solver/BFSSolver.h"
#include "utility/Renderer.h"

#include <iostream>

int main() {


    PegSolitaire game(PegSolitaire::ENGLISH_BOARD);

    State state = game.getInitialState();

    BFSSolver solver = {game};

    solver.solve();

    for (auto &solutionSate : solver.solution) {
        std::cout << Renderer::render(solutionSate) << "\n";
        std::cout << game.pegCount(solutionSate) << "\n";
        std::cout << "====================================\n";
    }


    return 0;
}


