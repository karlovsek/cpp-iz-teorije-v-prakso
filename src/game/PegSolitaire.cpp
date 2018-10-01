#include <algorithm>
#include <set>

#include "PegSolitaire.h"


int PegSolitaire::pegCount(State state) const {

    int count = 0;

    for (auto &row : state.data) {
        count += std::count(row.begin(), row.end(), PEG);
    }

    return count;
}


State PegSolitaire::getInitialState() const {


    State state = {7, 7};

    if (type == ENGLISH_BOARD) {

        state.data[0] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};
        state.data[1] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};
        state.data[2] = {PEG, PEG, PEG, PEG, PEG, PEG, PEG};
        state.data[3] = {PEG, PEG, PEG, NO_PEG, PEG, PEG, PEG};
        state.data[4] = {PEG, PEG, PEG, PEG, PEG, PEG, PEG};
        state.data[5] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};
        state.data[6] = {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID};
    }

    return state;

}

State PegSolitaire::getNextState(State &parentState) const {

    // create copy of state data;
    State nextState = parentState;

    nextState.parentState = std::make_shared<State>(parentState);
    nextState.moveFound = false;


    const unsigned long height = nextState.data.size();

    const Direction directions[] = {UP, DOWN, LEFT, RIGHT};

    for (int i = 0; i < height && !nextState.moveFound; i++) {

        const unsigned long width = nextState.data[i].size();

        for (int j = 0; j < width && !nextState.moveFound; j++) {
            // only peg can be moved
            if (nextState.data[i][j] != PEG) {
                continue;
            }

            for (auto direction: directions) {

                std::tuple<int, int, int> move{i, j, direction};

                if (parentState.wasMoveAlreadyTried(move)) {
                    continue;
                }

                // assuming that we have rows are of equal length
                if (direction == UP
                    && i > 2
                    && nextState.data[i - 1][j] == PEG
                    && nextState.data[i - 2][j] == NO_PEG) {

                    parentState.addMoveToHistory(move);

                    // update next state
                    nextState.data[i][j] = NO_PEG;
                    nextState.data[i - 1][j] = NO_PEG;
                    nextState.data[i - 2][j] = PEG;
                    nextState.moveFound = true;

                    break;
                }

                // assuming that we have rows are of equal length
                if (direction == DOWN
                    && i < height - 2
                    && nextState.data[i + 1][j] == PEG
                    && nextState.data[i + 2][j] == NO_PEG) {

                    parentState.addMoveToHistory(move);

                    // update next state
                    nextState.data[i][j] = NO_PEG;
                    nextState.data[i + 1][j] = NO_PEG;
                    nextState.data[i + 2][j] = PEG;

                    nextState.moveFound = true;

                    break;
                }

                if (direction == LEFT
                    && j > 2
                    && nextState.data[i][j - 1] == PEG
                    && nextState.data[i][j - 2] == NO_PEG) {

                    parentState.addMoveToHistory(move);

                    // update next state
                    nextState.data[i][j] = NO_PEG;
                    nextState.data[i][j - 1] = NO_PEG;
                    nextState.data[i][j - 2] = PEG;

                    nextState.moveFound = true;

                    break;
                }

                if (direction == RIGHT
                    && j < width - 2
                    && nextState.data[i][j + 1] == PEG
                    && nextState.data[i][j + 2] == NO_PEG) {

                    parentState.addMoveToHistory(move);

                    // update next state
                    nextState.data[i][j] = NO_PEG;
                    nextState.data[i][j + 1] = NO_PEG;
                    nextState.data[i][j + 2] = PEG;

                    nextState.moveFound = true;

                    break;
                }
            }
        }

    }


    return nextState;
}

bool PegSolitaire::isFinished(const State &state) const {
    return !state.moveFound;
}

bool PegSolitaire::isComplete(const State &state) const {
    return pegCount(state) == 1;
}

PegSolitaire::PegSolitaire(BoardType _type): type(_type) {

}

