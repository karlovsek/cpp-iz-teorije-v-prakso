//
// Created by Miha on 27/09/2018.
//

#ifndef WEEK1_ENGLISHBOARD_H
#define WEEK1_ENGLISHBOARD_H

#include <array>

enum class SpaceType {
    Invalid,
    Empty,
    Peg,
};

struct EnglishBoard {
    using board_structure = std::array<std::array<SpaceType, 7>, 7>;
    board_structure table;

    int peg_count() const;
};

#endif //WEEK1_ENGLISHBOARD_H
