#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("************\n");
	printf("***1.Play***\n");
	printf("***0.Exit***\n");

}
void game()
{
	int image = 0;
	int ret = rand() % 100 + 1;//Generate a random number between 1 and 100;

	printf("Please guss a number from 1 to 100\n");
	do {
		scanf_s("%d", &image);//Because you have to enter a number everytime
		if (image < 1 || image>100)
		{
			printf("Please enter a number between 1 and 100\n");
			continue;
		}


			if (image < ret)
			{
				printf("Your gussing number is smaller\n");
			}
			else if (image > ret)
			{
				printf("Your gussing number is bigger\n");
			}
			else
			{
				printf("You gussed the right number!\n");
				break;

			}
	} while (1);//retain loops.Only guss the right number, then you can be out of the game.
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:	
			game();
			break;
		case 0:
			printf("Exit the game");
			break;
		default:
			printf("Your input is invalid,Please enter again:\n");
			break;
		}
	} while (input!=0);//You should exit the loop when input is 0.


	return 0;
}