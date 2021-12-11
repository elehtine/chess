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
    piece *in_coords;
    int x;
    int y;
    for (y = 0; y < 8; y++)
    {
        for (x = 0; x < 8; x++)
        {
            in_coords = test_coordinates(pieces, x ,y);
            if (in_coords)
            {
                printf("%s", in_coords->symbol);
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
    draw_board(pieces);
    return (0);
}
