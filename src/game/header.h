#ifndef HEADER_H
#define HEADER_H


#define RANK_NB
#define FILE_NB

#define PIECE_COUNT 32
//--board characters--
static char WHITE[] = "░";
static char BLACK[] = "█";
static char PAWN_W[] = "♙";
static char PAWN_B[] = "♟";
static char KNIGHT_W[] = "♘";
static char KNIGHT_B[] = "♞";
static char ROOK_W[] = "♖";
static char ROOK_B[] = "♜";
static char BISHOP_W[] = "♗";
static char BISHOP_B[] = "♝";
static char QUEEN_W[] = "♕";
static char QUEEN_B[] = "♛";
static char KING_W[] = "♔";
static char KING_B[] = "♚";
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
    int x;
    int y;
    type type;
    int is_white;
} piece;

//--moving.c
int move_validation(piece *pieces[], piece *test_piece, int x, int y);
piece *test_coordinates(piece *pieces[], int x, int y);

//--drawing.c
void draw_board(piece *pieces[]);

//--game_start.c
piece *make_piece(type t_type, int x, int y, int white);
void starting_positions(piece *everything[]);
void start_game(piece *pieces[]);

//--memory.c
void free_pieces(piece *pieces[]);
piece *make_piece(type t_type, int x, int y, int white);

#endif
