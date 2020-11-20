#include <stdio.h>

#include "pictureManipulation.h"
#include "pictureManipulationFunctions.h"
#include "generalFunctions.h"

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
				rotateClockwise((int*)picture, SIZE);
				break;
				
			case 2:
				rotateCounterClockwise((int*)picture, SIZE);
				break;
				
			case 3:
				flipHorizontal((int*)picture, SIZE);
				break;
				
			case 4:
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
		
		if(option > 0 && option <= 4){
			printf("\n--------- picture after manipulation ---------\n");
			printMatrix((int*)picture, SIZE, SIZE);
		}
		else if(option != -1)
			printf("\nNothing happened.");
		
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
	if(scanf("%d", &option) == 0)
		return 0;
	return option;
}
