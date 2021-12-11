#ifndef HEADER_H
#define HEADER_H

typedef enum
{
    pawn,
    rook,
    knight,
    bishop,
    queen,
    king
} type;

typedef struct
{
    int col;
    int row;
    type type;
    int is_white;
} piece;

#endif
