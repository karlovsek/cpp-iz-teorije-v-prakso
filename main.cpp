#include "PegSolitare.h"
#include <iostream>


int main() {

    auto * pegSolitare = new PegSolitare;

    auto const english_board = pegSolitare->get_english_board();

    for(int i=0; i< 7; i++) {
        for(int j=0; j< 7; j++) {
            std::cout << english_board[i][j];
        }
        std::cout << "\n";
    }

    std::cout << "Peg count: " << pegSolitare->peg_count(english_board) << "\n";

    return 0;
}
