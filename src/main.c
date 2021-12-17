#include <stdio.h>

#include "header.h"

int main(void)
{
    piece pieces[32];
    if (&pieces[0] == NULL) {
        printf("null");
    } else {
        printf("not null");
    }
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
