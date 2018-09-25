#include <array>
#include <iostream>

struct EnglishBoard {
    using board_structure = std::array<std::array<char, 7>, 7>;
    board_structure table;

    int peg_count() const {
        int count = 0;


        for(auto& row : table) {
            count += std::count(row.begin(), row.end(), '.');
        }
        return count;
    }
};

void print(EnglishBoard board) {
    for (auto row : board.table) {
        for (auto col : row) {
            std::cout << col;
        }
        std::cout << std::endl;
    }
}

EnglishBoard get_english_board() {
    EnglishBoard board;

    for (int row = 0; row < board.table.size(); row++) {
        auto &row_ref = board.table[row];
        for (int col = 0; col < row_ref.size(); col++) {
            if (row < 2 || row > 4) {
                if (col < 2 || col > 4) {
                    row_ref[col] = ' ';
                } else {
                    row_ref[col] = '.';
                }
            } else if (row == 3 && col == 3) {
                row_ref[col] = 'o';
            } else {
                row_ref[col] = '.';
            }
        }
    }
    return board;
}

