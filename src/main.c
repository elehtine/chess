#include "header.h"
#include <stdio.h>

int main(void)
{
    piece pieces[32];
    starting_positions(&pieces[0]);
    start_game(pieces);
    return (0);
}

/*
    for (int i = 0; i < PIECE_COUNT; i++)
    {
        printf("x %d y %d type %d white %d\n", pieces[i].x, pieces[i].y, pieces[i].type, pieces[i].is_white);
    }
*/
