#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("----------扫雷--------\n");
	int i = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------扫雷--------\n");
}


//布置雷 -- 是在棋盘上随机的找十个坐标布置的
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;

	while (count != 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;

		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';//布置一个雷
			count--;
		}
	}
}


//排查雷
int Get_Mine_Count(char mine[ROWS][COLS], int x, int y)
{
	//写法1
	/*return mine[x - 1][y] + mine[x][y - 1] + mine[x][y - 1] + 
	mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';*/

	//写法2
	int sum = 0;
	for (int i = -1; i < 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			sum += (mine[x + i][y + j] - '0');
		}
	}
	return sum;
}
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<col+row-EASY_COUNT)
	{
		printf("请输入坐标:> ");
		scanf("%d%d", &x, &y);
		
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你踩雷了，游戏结束\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else 
			{
				int count = Get_Mine_Count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else {
			printf("输入的坐标有误，重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}