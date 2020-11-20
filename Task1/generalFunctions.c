#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "generalFunctions.h"
#include "numGameFunctions.h"

void printMatrix(const int* matrix, int rows, int cols)
{
	printf("\n");
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++, matrix++)
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
}

void shuffleBoardGame(int* board, int rows, int cols, int* zero_row, int* zero_col, int shuffle_count)
{
	srand(time(NULL));
	int direction;
	for(int i = 0; i < shuffle_count; i++){
		direction = rand() % 4 + 1; // range of random number is 1-4
		// 1 - UP , 2 - RIGHT , 3 - DOWN , 4 - LEFT
		
		switch(direction){
			case 1:
				if(moveUp((int*)board, rows, cols, zero_row, zero_col))
				break;
				
			case 2:
				if(moveRight((int*)board, rows, cols, zero_row, zero_col))
				break;
				
			case 3:
				if(moveDown((int*)board, rows, cols, zero_row, zero_col))
				break;
				
			case 4:
				if(moveLeft((int*)board, rows, cols, zero_row, zero_col))
				break;
		}
	}
}
