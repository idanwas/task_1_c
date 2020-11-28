#ifndef __GENERAL_FUNCTS_H
#define __GENERAL_FUNCTS_H

void printMatrix(const int* matrix, int rows, int cols);

void createRandomMatrix(int* matrix, int size);

void shuffleBoardGame(int* board, int rows, int cols, int* zero_row, int* zero_col, int shuffle_count);

int getOption();

#endif //__GENERAL_FUNCTS_H
