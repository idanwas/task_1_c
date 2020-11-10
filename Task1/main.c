#include <stdio.h>
#include <ctype.h>

#include "pictureManipulation.h"
#include "numGame.h"


int main()
{

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
				printf("\nNumber Game Function\n");
				NumberGame();
				break;
				
			case 'e':
				printf("\nBye Bye\n");
				return 0;
				
			default:
				printf("\nWrong input! Please try again...\n");
				break;
		}
	
	}while(1==1);
	
	
	
	return 0;
}
