#ifndef __PIC_MAN_FUNCTS_H
#define __PIC_MAN_FUNCTS_H

int getRandomNumber(int min, int max);

void rotateClockwise(int* matrix, int size);

void swapElementsClockwise(int* matrix, int size, int i, int j);

void rotateCounterClockwise(int* matrix, int size);

void swapElementsCounterClockwise(int* matrix, int size, int i, int j);

void getSquareElements(int* matrix, int size, int i, int j, int* a, int* b, int* c, int* d);

void flipHorizontal(int* matrix, int size);

void swapHorizontal(int* matrix, int size, int i, int j);

void flipVertical(int* matrix, int size);

void swapVertical(int* matrix, int size, int i, int j);

#endif //__PIC_MAN_FUNCTS_H
