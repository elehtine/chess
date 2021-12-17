#include <gtest/gtest.h>
/*
extern "C" {
  #include "header.h"
}

TEST(KingTest, OnlyKing) {
  piece king = make_piece(t_king, 3, 4, 1);
  int can_move[8][8] =
  {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 0, 1, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
  };

  for (int x = 0; x < 8; x++) {
    for (int y = 0; y < 8; y++) {
      EXPECT_TRUE(move_validation(&king, x, y) == can_move[y][x]);
    }
  }
}

*/