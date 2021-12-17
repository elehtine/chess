#include <stdio.h>

#include "header.h"

int main(void)
{
    piece *pieces[PIECE_COUNT];
    starting_positions(pieces);
    start_game(pieces);
    free_pieces(pieces);
    return (0);
}
