#include "header.h"
#include <stdio.h>

void badly_named_and_formatted_function(piece *everything)
{
    int i;
    piece temp_piece;
    for (i = 0; i < 16; i += 2)
    {
        temp_piece.type = t_pawn;
        temp_piece.row = 1;
        temp_piece.col = i / 2;
        temp_piece.is_white = 0;
 //       printf("%d, i, %d, %d, %d, %d\n", i, temp_piece.col, temp_piece.row, temp_piece.type, temp_piece.is_white);
        everything[i] = temp_piece;
        temp_piece.row = 6;
        temp_piece.col = i / 2;
        temp_piece.is_white = 1;
        everything[i + 1] = temp_piece;
//        printf("%d, i, %d, %d, %d, %d\n", i, temp_piece.col, temp_piece.row, temp_piece.type, temp_piece.is_white);
    }
        temp_piece.type = t_king;
        temp_piece.col = 4;
        temp_piece.row = 7;
        temp_piece.is_white = 1;
        everything[i] = temp_piece;
}

void make_king(piece *king)
{
    king->col = 4;
    king->row = 7;
    king->type = t_king;
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
