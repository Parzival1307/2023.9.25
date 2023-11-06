#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

menu()
{
	printf("****************\n");
	printf("******1.Play****\n");
	printf("******0.Exit****\n");

	
}
void game()
{
	char broad[3][3];
	char ret;
	//Broad initialization
	InitBroad(broad, 3, 3);
	//Broad display
	DisplayBroad(broad, 3, 3);
	while (1)
	{
		//PlayerMove
		PlayerMove(broad, 3, 3);
		//JudgeWinorLose
		ret = Iswin(broad, 3, 3);
		if (ret == '*' || ret == '#' || ret == 'Q')
		{
			printf("Game Over\n");
			break;
		}
		else
			printf("Game Continue\n");
		//BroadDisplay
		DisplayBroad(broad, 3, 3);
		//ComputerMove
		ComputerMove(broad, 3, 3);
		//JudgeWinorLose
		ret = Iswin(broad, 3, 3);
		if (ret == '*' || ret == '#' || ret == 'Q')
		{
			printf("Game Over\n");
			break;
		}
		else
			printf("Game Continue\n");
		//BroadDisplay
		DisplayBroad(broad, 3, 3);
	
	}
	if (ret == '*')
		printf("You Win!\n");
	if (ret == '#')
		printf("You Lose!\n");
	if (ret == 'Q')
		printf("The Game Is Draw\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//srand needs "stdlib"
	do
	{
		menu();
		scanf("%d", &input);
		switch(input)
		{
		case 1:
				//Play game
			game();
				break;
		case 0:
				//Exit
				break;
		default:
				printf("The input is invalid, please input again:\n");
				break;
		}
	} while (input);




	return 0;
}