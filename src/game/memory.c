#include "header.h"
#include <stdlib.h>

void free_pieces(piece *pieces[])
{
    int i;
    for (i = 0; i < PIECE_COUNT; i++)
    {
        free(pieces[i]);
    }
}

piece *make_piece(type t_type, int x, int y, int white)
{
    piece *temp_piece;

    temp_piece = malloc(sizeof(piece));
    if (!temp_piece)
    {
        return (0);
    }
    temp_piece->type = t_type;
    temp_piece->x = x;
    temp_piece->y = y;
    temp_piece->is_white = white;
    return (temp_piece);
}