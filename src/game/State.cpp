#include <array>
#include "State.h"

State::State(const State &state) {
    data = state.data;
    moveHistory = state.moveHistory;
    moveFound = state.moveFound;
}

State::State(unsigned long width, unsigned long height) {
    std::vector<int> row;
    row.resize(width, 0);

    data.resize(height, row);
}

void State::addMoveToHistory(const std::tuple<int, int, int> move) {
    moveHistory.push_back(move);
}

bool State::wasMoveAlreadyTried(const std::tuple<int, int, int> move) const {

    for (auto tiredMove: moveHistory) {
        if (tiredMove == move) {
            return true;
        }
    }

    return false;
}
