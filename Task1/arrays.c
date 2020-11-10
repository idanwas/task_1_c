#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "arrays.h"

void printMatrix(const int* matrix, int size)
{
	printf("\n");
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++, matrix++)
			printf("%10d", *matrix);
		printf("\n");
	}
}

void createRandomMatrix(int* matrix, int size)
{
	srand(time(NULL));
	
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
