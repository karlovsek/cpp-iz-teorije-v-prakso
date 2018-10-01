#ifndef DEMO_STATE_H
#define DEMO_STATE_H

#include <vector>
#include <tuple>


struct State {
    std::vector<std::vector<int>> data;
    std::vector<std::tuple<int, int, int>> moveHistory;
    bool moveFound = false;

    State(const State &state);

    State(unsigned long width, unsigned long height);

    void addMoveToHistory(std::tuple<int, int, int> move);

    bool wasMoveAlreadyTried(std::tuple<int, int, int> move) const;
};


#endif //DEMO_STATE_H
