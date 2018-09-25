#include "PegSolitaire.h"
#include <iostream>


int main() {

    PegSolitaire pegSolitaire = {};

    pegSolitaire.init_board(PegSolitaire::ENGLISH_BOARD);

    std::cout << pegSolitaire.print_board() << "\n";;

    std::cout << "Peg count: " << pegSolitaire.peg_count() << "\n";

    return 0;
}
