#ifndef HEADER_H
#define HEADER_H

#define PIECE_COUNT 17
//--board characters--
static char WHITE[] = "░";
static char BLACK[] = "█";
static char KING_W[] = "♔";
static char KING_B[] = "♚";
static char QUEEN_W[] = "♕";
static char QUEEN_B[] = "♛";
static char PAWN_W[] = "♙";
static char PAWN_B[] = "♟";
//--------------------

typedef enum types
{
    t_pawn,
    t_rook,
    t_knight,
    t_bishop,
    t_queen,
    t_king
} type;

typedef struct
{
    int col;
    int row;
    type type;
    int is_white;
} piece;

//--moving.c
int move_king(piece king, int x, int y);
int move_validation(piece *test_piece, int x, int y);
piece *test_coordinates(piece *pieces, int x, int y);

//--drawing.c
void draw_board(piece *pieces);

//--game_start.c
void badly_named_and_formatted_function(piece *everything);
void make_king(piece *king);
void start_game(piece *pieces);

#endif
