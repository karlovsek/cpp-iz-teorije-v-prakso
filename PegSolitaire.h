#ifndef DEMO_PEGSOLITARE_H
#define DEMO_PEGSOLITARE_H

#include <array>


class PegSolitaire {

public:
    enum Peg : char {
        PEG = 'P', NO_PEG = 'O', INVALID = '#'
    };

    std::array<std::array<char, 7>, 7> get_english_board();

    int peg_count(std::array<std::array<char, 7>, 7> board);
};


#endif
