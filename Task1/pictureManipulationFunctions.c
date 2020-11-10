#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "pictureManipulationFunctions.h"

void createRandomMatrix(int* matrix, int size)
{
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size; j++){
			*matrix = rand() % 100 + 1; // range of random number is 1-100
			matrix++;
		}
			
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size; j++){
			matrix--;
			if(*matrix < 0 || *matrix > 100)
				*matrix = *matrix % 100 + 1;
		}
}

int getRandomNumber(int min, int max)
{
	int rand_num = rand() % (max - min + 1) + min;
	return rand_num;
}

void printMatrix(const int* matrix, int size)
{
	printf("\n");
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++){
			printf("%10d", *matrix);
			matrix++;
		}
		printf("\n");
	}
}

void rotateClockwise(int* matrix, int size)
{
	printf("\nrotate clockwise\n");
	
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
	printf("\nrotate counter clockwise\n");
	
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
	
}
