#include "header.h"

int		main(void)
{
	piece rook1_w;
	piece white[16];
	piece black[16];
	rook1_w.col = 0;
	rook1_w.row = 7;
	rook1_w.type = rook;
	rook1_w.is_white = 1;
	printf("[col %d row %d type %d colour %d]\n", rook1_w.col, rook1_w.row, rook1_w.type, rook1_w.is_white);
	printf("Hello, world!");
	return (0);
}
