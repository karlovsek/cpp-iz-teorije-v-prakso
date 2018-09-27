//
// Created by dparadiz on 9/27/18.
//

#include <array>
#include <vector>
#include "State.h"


State::State(unsigned long width, unsigned long height) {

    this->height = height;
    this->width = width;

    std::vector<int> row;
    row.resize(width, 0);

    data.resize(height, row);

}


void State::populate(int x, int y, int value) {
    if (x < 0 || x > width || y < 0 || y > height) {
        //todo error
        return;
    }

    data[x][y] = value;
}

void State::populate(int x, std::vector<int> column) {
    if (x < 0 || x > width || column.size() > height) {
        //todo error
        return;
    }

    data[x] = column;

}

std::vector<std::vector<int>> State::get_data() const{
    return data;
}
