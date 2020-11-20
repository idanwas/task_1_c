#ifndef __NUM_GAME_H
#define __NUM_GAME_H

#define ROWS 4
#define COLS 4
#define SHUFFLE_COUNT 10

void NumberGame();

int checkBoard(int* board, int rows, int cols, int* zero_row, int* zero_col);

#endif //__NUM_GAME_H
