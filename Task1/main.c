#include <stdio.h>
#include <ctype.h>

#include "pictureManipulation.h"
#include "numGame.h"

int main()
{
	int flag = 1; // flag for do-while loop
	
	do{
		printf("\nPlease choose one of the following options");
		printf("\nP/p - Picture Manipulation");
		printf("\nN/n - Number Game");
		printf("\nE/e - Quit\n");
		
		char option;
		do{
			scanf("%c", &option);
		}while(isspace(option));
		
		option = tolower(option);
		
		switch(option)
		{
			case 'p':
				PictureManipulation();
				break;
				
			case 'n':
				NumberGame();
				break;
				
			case 'e':
				printf("\nBye Bye\n");
				flag = 0;
				break;
				
			default:
				printf("\nWrong input! Please try again...\n");
				break;
		}
	}while(flag);
	
	return 0;
}
