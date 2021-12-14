#include "header.h"
#include <stdio.h>

int main(void)
{
    piece king_test;
    piece pieces[32];
    badly_named_and_formatted_function(&pieces[0]);
    for (int i = 0; i < PIECE_COUNT; i++)
    {
        printf("col %d row %d type %d white %d\n", pieces[i].col, pieces[i].row, pieces[i].type, pieces[i].is_white);
    }
//    make_king(&king_test);
//    pieces[0] = king_test;
    start_game(pieces);
    return (0);
}
