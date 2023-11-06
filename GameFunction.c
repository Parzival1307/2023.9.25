#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
void InitBroad(char broad[3][3], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			broad[i][j] = ' ';
		}
	}
}
void DisplayBroad(char broad[3][3], int row, int col)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		//PrintData
		printf(" %c | %c | %c \n", broad[i][0], broad[i][1], broad[i][2]);

		//PrintLine
		if(i<2)
		printf("---|---|---\n");

	}
}
void PlayerMove(char broad[3][3], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("This is your turn.\n");
	
	//Judge value if is invalid
	while (1)
	{
		printf("Please input coordinate:\n");

		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (broad[x - 1][y - 1] == ' ')
			{
				broad[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("Input is invalid,please input again\n");
			}
		}
		else
		{
			printf("Input is invalid,please input again\n");
		}
	}
}
void ComputerMove(char broad[3][3], int row, int col)
{
	while (1)
	{
		int x = 0;
		int y = 0;
		x = rand() % 3;
		y = rand() % 3;
		

		if (broad[x][y] == ' ')
		{
			broad[x][y] = '#';
			break;
		}
		
	}
}
int isfull(char broad[3][3], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (broad[i][j] == ' ')
				return '0';
			else
				return '1';
		}
	}
}
char Iswin(char broad[3][3], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < 3; j++)
	{
		if (broad[0][j] ==broad[1][j]&& broad[1][j] == broad[2][j] && broad[2][j] != ' ')
		{
			return broad[0][j];
			break;
		}
	}
	for (i = 0; i < 3; i++)
	{
		if (broad[i][0] == broad[i][1] && broad[i][1] == broad[i][2] && broad[i][2] != ' ')
		{
			return broad[i][0];
			break;
		}
		
	}
	if (broad[0][0] == broad[1][1] && broad[1][1] == broad[2][2] && broad[2][2] != ' ')
	{
		return broad[0][0];


	}
	if (broad[0][2] == broad[1][1] && broad[1][1] == broad[2][0] && broad[2][0] != ' ')
	{
		return broad[0][2];
	}
	if (isfull(broad, 3, 3) == 1)
	{
		return 'Q';
	}
	else
		return 'C';

	
}