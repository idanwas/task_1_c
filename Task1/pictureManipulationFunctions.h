#ifndef __PIC_MAN_FUN_H
#define __PIC_MAN_FUN_H

void createRandomMatrix(int* matrix, int size);

int getRandomNumber(int min, int max);

void printMatrix(const int* matrix, int size);

void rotateClockwise(int* matrix, int size);

void swapElementsClockwise(int* matrix, int size, int i, int j);

void rotateCounterClockwise(int* matrix, int size);

void swapElementsCounterClockwise(int* matrix, int size, int i, int j);

void getSquareElements(int* matrix, int size, int i, int j, int* a, int* b, int* c, int* d);

#endif //__PIC_MAN_FUN_H
