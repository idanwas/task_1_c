#ifndef __NUM_GAME_FUNC_H
#define __NUM_GAME_FUNC_H

void initBoardGame(int* board, int size);

int moveUp(int* board, int rows, int cols, int* zero_row, int* zero_col);

int moveRight(int* board, int rows, int cols, int* zero_row, int* zero_col);

int moveDown(int* board, int rows, int cols, int* zero_row, int* zero_col);

int moveLeft(int* board, int rows, int cols, int* zero_row, int* zero_col);

int getDirection(int* board, int rows, int cols, int zero_row, int zero_col, int num);

#endif //__NUM_GAME_FUNC_H
