#include <stdio.h>

#include "header.h"

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
        printf("col %d row %d type %d white %d\n", pieces[i].col, pieces[i].row, pieces[i].type, pieces[i].is_white);
    }
*/
