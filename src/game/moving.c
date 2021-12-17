#include "header.h"
#include <stdlib.h>

int move_pawn(piece pawn, int x, int y)
{
    if (pawn.is_white)
    {
        if (x == pawn.x && pawn.y - y == 1)
        {
            return (1);
        }
    }
    else
    {
        if (x == pawn.x && pawn.y - y == -1)
        {
            return (1);
        }
    }
    return (0);
}

int move_king(piece *pieces[], piece king, int x, int y)
{
    int i;

    if (abs(x - king.x) >= 1 && abs(y - king.y) >= 1)
    {
        return (0);
    }
    for (i = 0; i < PIECE_COUNT; i++)
    {
        if (pieces[i]->x == x && pieces[i]->y == y)
        {
            return (0);
        }
    }
    return (1);
}

int move_queen(piece queen, int x, int y)
{
    if (queen.x == x || queen.y == y)
    {
        return (1);
    }
    else if (abs(x - queen.x) == abs(y - queen.y))
    {
        return (1);
    }
    return (0);
}

int move_validation(piece *pieces[], piece *test_piece, int x, int y)
{
    if (!test_piece || (y == test_piece->y && x == test_piece->x))
    {
        return (0);
    }
    switch (test_piece->type)
    {
        case t_pawn:
            return (move_pawn(*test_piece, x, y));
        case t_king:
            return (move_king(pieces, *test_piece, x, y));
        case t_queen:
            return (move_queen(*test_piece, x, y));
    }
    return (0);
}

piece *test_coordinates(piece *pieces[32], int x, int y)
{
    int i;

    for (i = 0; i < PIECE_COUNT; i++)
    {
        if (pieces[i]->x == x && pieces[i]->y == y)
        {
            return (pieces[i]);
        }
    }
    return (NULL);
}
