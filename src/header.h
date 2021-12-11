#include <stdio.h>

typedef struct
{
	int col;
	int row;
	int type;
	int is_white;
} piece;

enum type
{
	pawn,
	rook,
	knight,
	bishop,
	queen,
	king
};