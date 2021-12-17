#include <stdio.h>

#include "header.h"

int main(void)
{
    piece *pieces[32];
    starting_positions(pieces);
    start_game(pieces);
    return (0);
}
