#include "header.h"
#include <stdlib.h>

int move_pawn(piece pawn, int x, int y)
{
    if (pawn.is_white)
    {
        if (x == pawn.col && pawn.row - y == 1)
        {
            return (1);
        }
    }
    else
    {
        if (x == pawn.col && pawn.row - y == -1)
        {
            return (1);
        }

    }
    return (0);
}

int move_king(piece king, int x, int y)
{
    if (abs(x - king.col) <= 1 && abs(y - king.row) <= 1)
    {
        return (1);
    }
    return (0);
}

int move_queen(piece queen, int x, int y)
{
    if (queen.col == x || queen.row == y)
    {
        return (1);
    }
    else if (abs(x - queen.col) == abs(y - queen.row))
    {
        return (1);
    }
    return (0);
}

int move_validation(piece *test_piece, int x, int y)
{
    if (!test_piece || (y == test_piece->row && x == test_piece->col))
    {
        return (0);
    }
    else if (test_piece->type == t_pawn)
    {
        return (move_pawn(*test_piece, x, y));
    }
    else if (test_piece->type == t_king)
    {
        return (move_king(*test_piece, x, y));
    }
    else if (test_piece->type == t_queen)
    {
        return (move_queen(*test_piece, x, y));
    }
    return (0);
}
