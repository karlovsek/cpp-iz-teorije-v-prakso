#ifndef DEMO_PEGSOLITARE_H
#define DEMO_PEGSOLITARE_H

#include <array>


class PegSolitaire {

private:
    std::array<std::array<char, 7>, 7> board;

public:
    enum BoardType : char {
        ENGLISH_BOARD = '1'
    };

    enum Peg : char {
        PEG = 'P', NO_PEG = 'O', INVALID = '#'
    };

    int peg_count();

    void init_board(BoardType type);

    std::string print_board();

};


#endif
