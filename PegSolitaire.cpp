#include <algorithm>
#include "PegSolitaire.h"
#include <iostream>
#include <numeric>


int PegSolitaire::peg_count() {

    int count = 0;

    for (auto &row : board) {
        count += std::count(row.begin(), row.end(), PEG);
    }

    return count;
}


void PegSolitaire::init_board(PegSolitaire::BoardType type) {

    if (type == ENGLISH_BOARD) {
        board[0] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};
        board[1] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};
        board[2] = {PEG, PEG, PEG, PEG, PEG, PEG, PEG};
        board[3] = {PEG, PEG, PEG, NO_PEG, PEG, PEG, PEG};
        board[4] = {PEG, PEG, PEG, PEG, PEG, PEG, PEG};
        board[5] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};
        board[6] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};
    }
}

std::string PegSolitaire::print_board() {

    std::string output;
    auto rowReducer = [&](std::string output, char value) { return output.append(1, value); };

    for (auto &row:board) {
        std::string rowPrint;
        output.append(std::accumulate(row.begin(), row.end(), rowPrint, rowReducer).append("\n"));

    }

    return output;
}

