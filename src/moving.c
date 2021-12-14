#include "header.h"
#include <stdlib.h>

int move_king(piece king, int x, int y)
{
    if (y == king.row && x == king.col)
    {
        return (0);
    }
    if (abs(x - king.col) <= 1 && abs(y - king.row) <= 1)
    {
        return (1);
    }
    return (0);
}

int move_validation(piece *test_piece, int x, int y)
{
    if (!test_piece)
    {
        return (0);
    }
    else if (test_piece->type == t_king)
    {
        if (move_king(*test_piece, x, y))
        {
            return (1);
        }
    }
    return (0);
}
