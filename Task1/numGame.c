#include <stdio.h>

#include "numGame.h"
#include "numGameFunctions.h"
#include "arrays.h"

void NumberGame()
{
	int board[ROWS][COLS] = {0};
	//initBoardGame((int*)board, ROWS * COLS);
	printMatrix((int*)board, ROWS * COLS);
	
	
}
