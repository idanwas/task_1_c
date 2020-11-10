#include <stdio.h>

#include "pictureManipulation.h"
#include "pictureManipulationFunctions.h"
#include "arrays.h"

void PictureManipulation()
{
	int picture[SIZE][SIZE] = {0};
	createRandomMatrix((int*)picture, SIZE);
	printMatrix((int*)picture, SIZE, SIZE);
	int flag = 1; // flag for do-while loop

	do{
		printMenu();
		int option = getOption();
		switch(option)
		{
			case 1:
				printf("\nYou chose #1\n");
				rotateClockwise((int*)picture, SIZE);
				break;
				
			case 2:
				printf("\nYou chose #2\n");
				rotateCounterClockwise((int*)picture, SIZE);
				break;
				
			case 3:
				printf("\nYou chose #3\n");
				flipHorizontal((int*)picture, SIZE);
				break;
				
			case 4:
				printf("\nYou chose #4\n");
				flipVertical((int*)picture, SIZE);
				break;
				
			case -1:
				printf("\nYou chose to quit\n");
				flag = 0;
				break;
				
			default:
				printf("\nWrong input! Please try again...\n");
				break;
		}
		
		if(option != -1){
			printf("\n--------- picture after manipulation ---------\n");
			printMatrix((int*)picture, SIZE, SIZE);
		}
		
	}while(flag);
}

void printMenu()
{
	printf("\nPlease choose one of the following options");
	printf("\n1 - 90 degree clockwise");
	printf("\n2 - 90 degree counter clockwise");
	printf("\n3 - Flip horizontal");
	printf("\n4 - Flip vertical");
	printf("\n-1 - Quit\n");
}

int getOption()
{
	int option;
	int res = scanf("%d", &option);
	if(res == 0){
		printf("\nWrong input!\n");
		return 0;
	}
	return option;
}
