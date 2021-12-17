#include <gtest/gtest.h>

extern "C" {
  // Include real game library
  typedef struct
  {
    int x;
    int y;
    int type;
    int is_white;
  } piece;

  int can_move(piece p, piece *board) {
    return 1;
  }
}

TEST(GameTest, KingMoves) {
  piece board[32];
  board[0] = { 7, 4, 5, 1 };
  EXPECT_TRUE(can_move(board[0], board));
  EXPECT_FALSE(can_move(board[0], board));
}
