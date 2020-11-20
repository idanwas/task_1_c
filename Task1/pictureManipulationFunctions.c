#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "pictureManipulationFunctions.h"

int getRandomNumber(int min, int max)
{
	int rand_num = rand() % (max - min + 1) + min;
	return rand_num;
}

void rotateClockwise(int* matrix, int size)
{
	for(int i = 0; i < (size / 2); i++)
		for(int j = i; j < (size - i - 1); j++)
			swapElementsClockwise((int*)matrix, size, i , j);
}

void swapElementsClockwise(int* matrix, int size, int i, int j)
{
	int a,b,c,d;
	
	getSquareElements((int*)matrix, size, i, j, &a, &b, &c, &d);
	
	*(matrix + size * i + j) = d;
	*(matrix + size * j + (size - i - 1)) = a;
	*(matrix + size * (size - i - 1) + (size - j - 1)) = b;
	*(matrix + size * (size - j - 1) + i) = c;
}

void rotateCounterClockwise(int* matrix, int size)
{
	for(int i = 0; i < (size / 2); i++)
		for(int j = i; j < (size - i - 1); j++)
			swapElementsCounterClockwise((int*)matrix, size, i , j);
}

void swapElementsCounterClockwise(int* matrix, int size, int i, int j)
{
	int a,b,c,d;
	
	getSquareElements((int*)matrix, size, i, j, &a, &b, &c, &d);
	
	*(matrix + size * i + j) = b;
	*(matrix + size * j + (size - i - 1)) = d;
	*(matrix + size * (size - i - 1) + (size - j - 1)) = c;
	*(matrix + size * (size - j - 1) + i) = a;
}

void getSquareElements(int* matrix, int size, int i, int j, int* a, int* b, int* c, int* d)
{
	*a = *(matrix + size * i + j);
	// a = matrix[i][j]
	
	*b = *(matrix + size * j + (size - i - 1));
	// b = matrix[j][size-i-1]
	
	*c = *(matrix + size * (size - i - 1) + (size - j - 1));
	// c = matrix[size-i-1][size-j-1]
	
	*d = *(matrix + size * (size - j - 1) + i);
	// d = matrix[size-j-1][i]
}

void flipHorizontal(int* matrix, int size)
{
	for(int i = 0; i < (size / 2); i++)
		for(int j = 0; j < size; j++)
			swapHorizontal((int*)matrix, size, i , j);
}

void swapHorizontal(int* matrix, int size, int i, int j)
{
	int temp;
	temp = *(matrix + size * i + j);
	// temp = matrix[i][j]
	
	*(matrix + size * i + j) = *(matrix + size * (size - i - 1) + j);
	// matrix[i][j] = matrix[size-i-1][j]
	
	*(matrix + size * (size - i - 1) + j) = temp;
	//matrix[size-i-1][j] = temp = matrix[i][j]
}

void flipVertical(int* matrix, int size)
{
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size / 2; j++)
			swapVertical((int*)matrix, size, i, j);
}

void swapVertical(int* matrix, int size, int i, int j)
{
	int temp;
	temp = *(matrix + size * i + j);
	// temp = matrix[i][j]
	
	*(matrix + size * i + j) = *(matrix + size * i + (size - j - 1));
	// matrix[i][j] = matrix[i][size-j-1]
	
	*(matrix + size * i + (size - j - 1)) = temp;
	//matrix[i][size-j-1] = temp = matrix[i][j]
}
