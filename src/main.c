#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


piece *test_coordinates(piece *pieces, int x, int y)
{
    if (pieces[0].col == x && pieces[0].row == y)
    {
        return (&pieces[0]);
    }
    return (NULL);
}

void draw_board(piece *pieces)
{
    //--board characters--
    char WHITE[] = "░";
    char BLACK[] = "█";
    char KING_W[] = "♔";
    char KING_B[] = "♚";
    char QUEEN_W[] = "♕";
    char QUEEN_B[] = "♛";
    //--------------------


    piece *found_piece;
    int x;
    int y;
//    printf("  abcdefgh\n");
    for (y = 0; y < 8; y++)
    {
//        printf("%d ", y + 1);
        for (x = 0; x < 8; x++)
        {
            found_piece = test_coordinates(pieces, x, y);
            if (found_piece)
            {
                if (found_piece->type == king)
                {
                    printf("%s", KING_W);
                }
            }
            else
            {
                if ((x + y) % 2 == 0)
                {
                    printf("%s", WHITE);
                }
                else
                {
                    printf("%s", BLACK);
                }
            }
        }
        printf("\n");
    }
}

int move_king(piece king, int x, int y)
{
    if (y == king.row && x == king.col)
    {
        return (0);
    }
    if (abs(x - king.col) <= 1 && abs(y - king.row) <= 1)
    {
        return (1);
    }
    return (0);
}

int move_validation(piece *test_piece, int x, int y)
{
    if (!test_piece)
    {
        return (0);
    }
    else if (test_piece->type == king)
    {
        if (move_king(*test_piece, x, y))
        {
            return (1);
        }
    }
    return (0);
}

void start_game(piece *pieces)
{
    int from_x;
    int from_y;
    int to_x;
    int to_y;
    piece *found_piece;

    draw_board(pieces);

    scanf("%d %d %d %d", &from_x, &from_y, &to_x, &to_y);
    while (to_x < 8 && to_y < 8 && to_x >= 0 && to_y >= 0) // Game loop
    {
        found_piece = test_coordinates(pieces, from_x, from_y);
        if (move_validation(found_piece, to_x, to_y))
        {
            found_piece->col = to_x;
            found_piece->row = to_y;
        }
        else
        {
            printf("Try again.\n");
        }
        draw_board(pieces);
        scanf("%d %d %d %d", &from_x, &from_y, &to_x, &to_y);
    }
    printf("%d %d\n", from_x, from_y);
}

int main(void)
{
    piece king_test;
    piece pieces[32];
    king_test.col = 4;
    king_test.row = 7;
    king_test.type = king;
    pieces[0] = king_test;
    start_game(pieces);
    return (0);
}
