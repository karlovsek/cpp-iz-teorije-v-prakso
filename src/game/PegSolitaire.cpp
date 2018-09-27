#include <algorithm>
#include <numeric>
#include <set>

#include "PegSolitaire.h"


int PegSolitaire::peg_count() const {

    int count = 0;

    for (auto &row : state.get_data()) {
        count += std::count(row.begin(), row.end(), PEG);
    }

    return count;
}


void PegSolitaire::init_state(PegSolitaire::BoardType type) {


    if (type == ENGLISH_BOARD) {
        state = {7, 7};

        state.populate(0, {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID});
        state.populate(1, {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID});
        state.populate(2, {PEG, PEG, PEG, PEG, PEG, PEG, PEG});
        state.populate(3, {PEG, PEG, PEG, NO_PEG, PEG, PEG, PEG});
        state.populate(4, {PEG, PEG, PEG, PEG, PEG, PEG, PEG});
        state.populate(5, {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID});
        state.populate(6, {INVALID, INVALID, PEG, PEG, PEG, INVALID, INVALID});
    }

}

void PegSolitaire::makeMove() {

};

State PegSolitaire::getState() const {
    return state;
};

bool PegSolitaire::isFinished() const {
    return  false;
};

