#include "header.h"
#include <stdio.h>

void draw_piece(piece found_piece)
{
    if (found_piece.type == t_pawn)
    {
        if (found_piece.is_white)
        {
            printf("%s", PAWN_W);
        }
        else
        {
            printf("%s", PAWN_B);
        }
    }
    else if (found_piece.type == t_rook)
    {
        if (found_piece.is_white)
        {
            printf("%s", ROOK_W);
        }
        else
        {
            printf("%s", ROOK_B);
        }
    }
    else if (found_piece.type == t_knight)
    {
        if (found_piece.is_white)
        {
            printf("%s", KNIGHT_W);
        }
        else
        {
            printf("%s", KNIGHT_B);
        }
    }
    else if (found_piece.type == t_bishop)
    {
        if (found_piece.is_white)
        {
            printf("%s", BISHOP_W);
        }
        else
        {
            printf("%s", BISHOP_B);
        }
    }
    else if (found_piece.type == t_queen)
    {
        if (found_piece.is_white)
        {
            printf("%s", QUEEN_W);
        }
        else
        {
            printf("%s", QUEEN_B);
        }
    }
    else if (found_piece.type == t_king)
    {
        if (found_piece.is_white)
        {
            printf("%s", KING_W);
        }
        else
        {
            printf("%s", KING_B);
        }
    }
}

void draw_board(piece *pieces)
{
    piece *found_piece;
    int x;
    int y;
    printf("\n  01234567\n");
    for (y = 0; y < 8; y++)
    {
        printf("%d ", y);
        for (x = 0; x < 8; x++)
        {
            found_piece = test_coordinates(pieces, x, y);
            if (found_piece)
            {
                draw_piece(*found_piece);
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

piece *test_coordinates(piece *pieces, int x, int y)
{
    int i;

    for (i = 0; i < PIECE_COUNT; i++)
    {
        if (pieces[i].col == x && pieces[i].row == y)
        {
            return (&pieces[i]);
        }
    }
    return (NULL);
}
