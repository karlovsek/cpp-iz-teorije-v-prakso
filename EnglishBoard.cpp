//
// Created by Miha on 27/09/2018.
//

#include "EnglishBoard.h"

int EnglishBoard::peg_count() const {
    int count = 0;

    for(const auto& row : table) {
        count += std::count(row.begin(), row.end(), SpaceType::Peg);
    }

    return count;
}
