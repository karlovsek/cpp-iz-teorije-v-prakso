#ifndef ps_PEG_SOLITARE_HPP_INCLUDED
#define ps_PEG_SOLITARE_HPP_INCLUDED

#include <cstddef>
#include <array>
#include <numeric>
#include <iostream>
#include <string_view>

namespace ps {

  class English_board
  {
  public:
    English_board()
    {
      board_.fill(true);
      board_[16] = false;

      peg_count_ = std::accumulate(board_.begin(), board_.end(), 0);
    }

    std::size_t peg_count() const
    {
      return peg_count_;
    }

    void print() const
    {
      std::cout << "Output\n\n";

      constexpr std::size_t row_count = 7;
      std::size_t field_number = 0;
      for (std::size_t i = 0; i < row_count; ++i)
      {
        std::size_t row_len = 7;
        if (i < 2 || i > 4)
        {
          row_len = 3;
          std::cout << "  ";
        }

        for (std::size_t j = 0; j < row_len; ++j)
        {
          std::cout << (board_[field_number] ? '.' : 'o') << std::flush;
          ++field_number;
        }
        std::cout << '\n';
      }

      std::cout << std::endl;
    }

  private:
    std::array<bool, 33> board_;
    std::size_t peg_count_;
  };

} // ns

#endif // ps_PEG_SOLITARE_HPP_INCLUDED
