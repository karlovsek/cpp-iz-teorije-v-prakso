#include "PegSolitaire.h"
#include <iostream>


int main() {

    PegSolitaire pwgSolitaire = {};

    auto const english_board = pwgSolitaire.get_english_board();

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            std::cout << english_board[i][j];
        }
        std::cout << "\n";
    }

    std::cout << "Peg count: " << pwgSolitaire.peg_count(english_board) << "\n";

    return 0;
}
