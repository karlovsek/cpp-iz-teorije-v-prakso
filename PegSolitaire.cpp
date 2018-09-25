#include <algorithm>
#include "PegSolitaire.h"

std::array<std::array<char, 7>, 7> PegSolitaire::get_english_board() {

    std::array<std::array<char, 7>, 7> board = {};

    board[0] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};
    board[1] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};
    board[2] = {PEG, PEG, PEG, PEG, PEG, PEG, PEG};
    board[3] = {PEG, PEG, PEG, NO_PEG, PEG, PEG, PEG};
    board[4] = {PEG, PEG, PEG, PEG, PEG, PEG, PEG};
    board[5] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};
    board[6] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};

    return board;
}


int PegSolitaire::peg_count(std::array<std::array<char, 7>,7> board) {

    int count = 0;

    for(auto &row : board) {
        count += std::count(row.begin(), row.end(), PEG);
    }

    return count;
}

