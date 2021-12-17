#include <stdio.h>

#include "header.h"

int main(void)
{
    piece *pieces[32];
    starting_positions(pieces);
    for (int i = 0; i < PIECE_COUNT; i++)
    {
        printf("x %d y %d type %d white %d\n", pieces[i]->x, pieces[i]->y, pieces[i]->type, pieces[i]->is_white);
    }
    start_game(pieces);
    free_pieces(pieces);
    return (0);
}
