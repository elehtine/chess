#include <stdio.h>

typedef struct
{
    int col;
    int row;
    int type;
    int is_white;
    char *symbol;
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

//--board characters--
char WHITE[] = "░";
char BLACK[] = "█";
char KING_W[] = "♔";
char KING_B[] = "♚";
char QUEEN_W[] = "♕";
char QUEEN_B[] = "♛";
//--------------------
