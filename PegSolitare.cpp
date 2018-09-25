//
// Created by dparadiz on 9/25/18.
//

#include "PegSolitare.h"

int **PegSolitare::get_english_board() {

    int **array2D = 0;
    array2D = new int *[7];

    int board[7][7] = {
            {2, 2, 1, 1, 1, 2, 2},
            {2, 2, 1, 1, 1, 2, 2},
            {1, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 0, 1, 1, 1},
            {1, 1, 1, 1, 1, 1, 1},
            {2, 2, 1, 1, 1, 2, 2},
            {2, 2, 1, 1, 1, 2, 2}
    };

    for (int h = 0; h < 7; h++) {
        array2D[h] = new int[7];

        for (int w = 0; w < 7; w++) {

            array2D[h][w] = board[h][w];
        }
    }

    return array2D;
}

int PegSolitare::peg_count(int ** board) {
    int count = 0;
    for (int h = 0; h < 7; h++) {


        for (int w = 0; w < 7; w++) {
            if (board[w][h] == 1) {
                count++;
            }
        }
    }
    return count;

}

PegSolitare::PegSolitare() = default;
