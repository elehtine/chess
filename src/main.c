#include "header.h"

piece *test_coordinates(piece *pieces, int x, int y)
{
    if (pieces[0].col == x && pieces[0].row == y)
    {
        return (&pieces[0]);
    }
    return (NULL);
}

void draw_board(piece *pieces)
{
    piece *found_piece;
    int x;
    int y;
    for (y = 0; y < 8; y++)
    {
        for (x = 0; x < 8; x++)
        {
            found_piece = test_coordinates(pieces, x ,y);
            if (found_piece)
            {
                printf("%s", found_piece->symbol);
            }
            else
            {
                if ((x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0))
                {
                    printf("%s", WHITE);
                }
                else
                {
                    printf("%s", BLACK);
                }
            }
        }
        printf("\n");
    }
}

void game_loop(piece *pieces)
{
    int x;
    int y;
    int x_new;
    int y_new;
    piece *found_piece;

    draw_board(pieces);

    scanf("%d %d %d %d", &x, &y, &x_new, &y_new);
    while (x_new < 8 && y_new < 8)
    {
        pieces[0].col = x_new;
        pieces[0].row = y_new;
        draw_board(pieces);
        scanf("%d %d %d %d", &x, &y, &x_new, &y_new);
    }
    printf("%d %d\n", x, y);
}

int main(void)
{
    piece king_test;
    piece pieces[32];
    king_test.col = 4;
    king_test.row = 7;
    king_test.symbol = KING_W;
    pieces[0] = king_test;
    printf("[col %d row %d type %d colour %d]\n", king_test.col, king_test.row, king_test.type, king_test.is_white);
    printf("Hello, world!\n");
    game_loop(pieces);
    return (0);
}
