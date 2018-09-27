//
// Created by Miha on 27/09/2018.
//

#include "PegSolitaire.hpp"

EnglishBoard get_english_board() {
    EnglishBoard board{};

    for (size_t row = 0; row < board.table.size(); row++) {
        auto &row_ref = board.table[row];
        for (size_t col = 0; col < row_ref.size(); col++) {
            if (row < 2 || row > 4) {
                if (col < 2 || col > 4) {
                    row_ref[col] = SpaceType::Invalid;
                } else {
                    row_ref[col] = SpaceType::Peg;
                }
            } else if (row == 3 && col == 3) {
                row_ref[col] = SpaceType::Empty;
            } else {
                row_ref[col] = SpaceType::Peg;
            }
        }
    }
    return board;
}

char charForEnum(SpaceType type) {
   switch(type) {
       case SpaceType::Empty: {
           return 'o';
       }
       case SpaceType::Invalid: {
           return ' ';
       }
       case SpaceType::Peg: {
           return '.';
       }
       default: {
           return '?';
       }
   }
}

void print(const EnglishBoard& board) {
    for (const auto& row : board.table) {
        for (const auto& col : row) {
            std::cout << charForEnum(col);
        }
        std::cout << std::endl;
    }
}

