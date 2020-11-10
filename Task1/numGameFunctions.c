#include <stdio.h>

#include "numGameFunctions.h"

void initBoardGame(int* board, int size)
{
	for(int i = 0; i < size - 1; i++, board++){
		*board = 10;
	}
}


