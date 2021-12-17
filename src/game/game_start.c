#include "header.h"
#include <stdio.h>

void starting_positions(piece *everything[])
{
    int i;
    piece temp_piece;
    for (i = 0; i < 16; i += 2)
    {
        everything[i] = make_piece(t_pawn, i / 2, 1, 0);
        everything[i + 1] = make_piece(t_pawn, i / 2, 6, 1);
    }    
    everything[i++] = make_piece(t_rook, 0, 0, 0);
    everything[i++] = make_piece(t_rook, 0, 7, 1);
    everything[i++] = make_piece(t_rook, 7, 0, 0);
    everything[i++] = make_piece(t_rook, 7, 7, 1);

    everything[i++] = make_piece(t_knight, 1, 0, 0);
    everything[i++] = make_piece(t_knight, 1, 7, 1);
    everything[i++] = make_piece(t_knight, 6, 0, 0);
    everything[i++] = make_piece(t_knight, 6, 7, 1);

    everything[i++] = make_piece(t_bishop, 2, 0, 0);
    everything[i++] = make_piece(t_bishop, 2, 7, 1);
    everything[i++] = make_piece(t_bishop, 5, 0, 0);
    everything[i++] = make_piece(t_bishop, 5, 7, 1);

    everything[i++] = make_piece(t_queen, 4, 0, 0);
    everything[i++] = make_piece(t_queen, 3, 7, 1);

    everything[i++] = make_piece(t_king, 3, 0, 0);
    everything[i++] = make_piece(t_king, 4, 7, 1);
}

void start_game(piece *pieces[])
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
        if (move_validation(pieces, found_piece, to_x, to_y))
        {
            found_piece->x = to_x;
            found_piece->y = to_y;
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
