//
// Created by dparadiz on 9/27/18.
//

#ifndef DEMO_STATE_H
#define DEMO_STATE_H

#include <vector>

class State {

    std::vector<std::vector<int>> data;

    unsigned long width;
    unsigned long height;


public:
    State(unsigned long width, unsigned long height);
    void populate(int x, int y, int value);
    void populate(int x, std::vector<int> column);

    std::vector<std::vector<int>> get_data() const;



};


#endif //DEMO_STATE_H
