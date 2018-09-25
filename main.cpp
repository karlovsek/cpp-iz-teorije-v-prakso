#include "PegSolitaire.hpp"
#include <iostream>

int main(){

  ps::English_board english_board;

  english_board.print();
  std::cout << "Peg count: " << english_board.peg_count() << "\n";

// Output
//
//   ···
//   ···
// ·······
// ···o···
// ·······
//   ···
//   ···
//
// Peg count: 32
  return 0;
}
