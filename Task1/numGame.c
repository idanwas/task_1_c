#include <stdio.h>

#include "numGame.h"
#include "numGameFunctions.h"
#include "generalFunctions.h"

void NumberGame()
{
	int board[3][4] = {0};
	int rows = 3, cols = 4;
	initBoardGame((int*)board, rows*cols);
	int zero_row = rows - 1; // zero_row = what row zero is located
	int zero_col = cols - 1; // zero_col = what col zero is located
	
	shuffleBoardGame((int*)board, rows, cols, &zero_row, &zero_col, SHUFFLE_COUNT);

	do{
		printMatrix((int*)board, rows, cols);
		int check = checkBoard((int*)board, rows, cols, &zero_row, &zero_col);
		
		if(check){
			printf("\nYou win! The game is over!\n");
			break;
		}
		
		printf("\nYour step: ");
		int num;
		scanf("%d", &num);
		
		// check if number is out of possible options --> { 1 <= num < rows*cols }
		if((num < 1) || (num >= rows * cols)){ 
			printf("\nInvalid step!");
		}
		else{
			int direction = getDirection((int*)board, rows, cols, zero_row, zero_col, num);

			switch(direction){
				case 1:
					moveUp((int*)board, rows, cols, &zero_row, &zero_col);
					break;
					
				case 2:
					moveRight((int*)board, rows, cols, &zero_row, &zero_col);
					break;
					
				case 3:
					moveDown((int*)board, rows, cols, &zero_row, &zero_col);
					break;
					
				case 4:
					moveLeft((int*)board, rows, cols, &zero_row, &zero_col);
					break;
					
				default:
					printf("\nInvalid step!");
			}
		}
	}while(1 == 1);
	
}

int checkBoard(int* board, int rows, int cols, int* zero_row, int* zero_col)
{
	if((*zero_row != rows - 1) || (*zero_col != cols - 1)) // if 0 is not in the last row and col then stop checking
		return 0;
		
	for(int i = 1; i < rows * cols; i++, board++)
		if(*board != i)	// check each cell and stop when cell is not equal to i (counter)
			return 0;
			
	return 1;
}
