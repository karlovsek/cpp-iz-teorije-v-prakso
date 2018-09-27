#include <iostream>
#include "game/State.h"
#include "game/PegSolitaire.h"
#include "utility/Renderer.h"

int main() {

    State state(2, 2);

    PegSolitaire game;

    game.init_state(PegSolitaire::ENGLISH_BOARD);


    std::cout << Renderer::render(game.getState()) << "\n";
    std::cout << game.peg_count() << "\n";

    return 0;
}


