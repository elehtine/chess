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
    piece *found_piece;
    int x;
    int y;
//    printf("  abcdefgh\n");
    for (y = 0; y < 8; y++)
    {
//        printf("%d ", y + 1);
        for (x = 0; x < 8; x++)
        {
            found_piece = test_coordinates(pieces, x ,y);
            if (found_piece)
            {
                printf("%s", found_piece->symbol);
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
    else if (!strcmp(test_piece->symbol, KING_W))
    {
        if (move_king(*test_piece, x, y))
        {
            return (1);
        }
    }
    return (0);
}

void game_loop(piece *pieces)
{
    int x;
    int y;
    int x_new;
    int y_new;
    piece *found_piece;

    draw_board(pieces);

    scanf("%d %d %d %d", &x, &y, &x_new, &y_new);
    while (x_new < 8 && y_new < 8 && x_new >= 0 && y_new >= 0)
    {
        found_piece = test_coordinates(pieces, x, y);
        if (move_validation(found_piece, x_new, y_new))
        {
            found_piece->col = x_new;
            found_piece->row = y_new;
        }
        else
        {
            printf("Try again.\n");
        }
        draw_board(pieces);
        scanf("%d %d %d %d", &x, &y, &x_new, &y_new);
    }
    printf("%d %d\n", x, y);
}

int main(void)
{
    piece king_test;
    piece pieces[32];
    king_test.col = 4;
    king_test.row = 7;
    king_test.symbol = KING_W;
    pieces[0] = king_test;
    printf("[col %d row %d type %d colour %d]\n", king_test.col, king_test.row, king_test.type, king_test.is_white);
    printf("Hello, world!\n");
    game_loop(pieces);
    return (0);
}
