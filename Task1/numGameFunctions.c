#include <stdio.h>

#include "numGameFunctions.h"

void initBoardGame(int* board, int size)
{
	for(int i = 1; i < size; i++, board++)
		*board = i;
}

int moveUp(int* board, int rows, int cols, int* zero_row, int* zero_col)
{
	if(*zero_row == 0) // check if move is legal
		return 0;

	*(board + cols * (*zero_row) + (*zero_col)) = *(board + cols * ((*zero_row) - 1) + (*zero_col));
	// board[zero_row][zero_col] = board[zero_row-1][zero_col]
	
	*(board + cols * ((*zero_row) - 1) + (*zero_col)) = 0;
	// board[zero_row-1][zero_col] = 0
	
	(*zero_row)--;
	
	return 1;
}

int moveRight(int* board, int rows, int cols, int* zero_row, int* zero_col)
{
	if(*zero_col == cols - 1) // check if move is legal
		return 0;

	*(board + cols * (*zero_row) + (*zero_col)) = *(board + cols * (*zero_row) + (*zero_col + 1));
	// board[zero_row][zero_col] = board[zero_row][zero_col+1]
	
	*(board + cols * (*zero_row) + (*zero_col + 1)) = 0;
	// board[zero_row][zero_col+1] = 0
	
	(*zero_col)++;
	
	return 1;
}

int moveDown(int* board, int rows, int cols, int* zero_row, int* zero_col)
{
	if(*zero_row == rows - 1) // check if move is legal
		return 0;

	*(board + cols * (*zero_row) + (*zero_col)) = *(board + cols * (*zero_row + 1) + (*zero_col));
	// board[zero_row][zero_col] = board[zero_row+1][zero_col]
	
	*(board + cols * (*zero_row + 1) + (*zero_col)) = 0;
	// board[zero_row+1][zero_col] = 0
	
	(*zero_row)++;
	
	return 1;
}

int moveLeft(int* board, int rows, int cols, int* zero_row, int* zero_col)
{
	if(*zero_col == 0) // check if move is legal
		return 0;

	*(board + cols * (*zero_row) + (*zero_col)) = *(board + cols * (*zero_row) + (*zero_col - 1));
	// board[zero_row][zero_col] = board[zero_row][zero_col-1]
	
	*(board + cols * (*zero_row) + (*zero_col - 1)) = 0;
	// board[zero_row][zero_col-1] = 0
	
	(*zero_col)--;
	
	return 1;
}

int getDirection(int* board, int rows, int cols, int zero_row, int zero_col, int num)
{
	// 1 - UP , 2 - RIGHT , 3 - DOWN , 4 - LEFT , 0 - invalid
	
	if(zero_row != 0){ // check upper side
		if(*(board + cols * ((zero_row) - 1) + (zero_col)) == num)
			return 1;
	}
	
	if(zero_col != cols - 1){ // check right side
		if(*(board + cols * (zero_row) + (zero_col + 1)) == num)
			return 2;
	}
	
	if(zero_row != rows - 1){ // check lower side
		if(*(board + cols * (zero_row + 1) + (zero_col)) == num)
			return 3;
	}
	
	if(zero_col != 0){ // check left side
		if(*(board + cols * (zero_row) + (zero_col - 1)) == num)
			return 4;
	}		
		
	return 0;
	
}


