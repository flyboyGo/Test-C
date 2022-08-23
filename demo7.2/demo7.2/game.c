#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化棋盘实现
void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘实现
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//打印数据行
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("%c", '|');
			}
			else
			{
				printf("\n");
			}
		}
		//打印分割行
		if (i < row - 1) 
		{
			for (int k = 0; k < col; k++)
			{
				printf("---");
				if (k < col - 1)
				{
					printf("%c", '|');
				}
				else
				{
					printf("\n");
				}
			}
		}
	}
}

//玩家下棋实现
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("玩家走:>\n");
	printf("请输入要下的坐标:>");
	while (1)
	{
		scanf("%d %d", &x, &y);
		//判断x,y的合法性
		if ((x >= 1 && x <= ROW) && (y >= 1 && y <= COL))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用,请重新输入!\n");
			}
		}
		else
		{
			printf("坐标非法,请重新输入:>\n");
		}
	}
}

//电脑下棋实现
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			printf("x = %d, y = %d\n", x, y);
			break;
		}
	}
}

//判断棋盘是否已经满了
//返回1,满了
//返回0,未满
int IsFile(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

//判断游戏输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	//判断三行的情况
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	//判断三列的情况
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] !=' ')
		{
			return board[0][i];
		}
	}
    //判断对角线的情况
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}
	
	//判断是否平局
	if (1 == IsFile(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}

//判断游戏输赢通用版(参数为:棋盘信息数组、棋盘的行数、棋盘的列数、成棋的个数、下棋的坐标)
char IsWinPlus(char board[ROW][COL], int row, int col, int sz, int b_x, int b_y)
{
	int count = 0;
	int time = 0;
	//将下棋的坐标-1,复合数组的规律
	int x = b_x - 1, y = b_y -1;
	//判断下棋处横排的情况
	for (int i = 0; i < sz; i++)
	{
		count = 0;
		time = -i;
		for (int j = 0; j < sz; j++)
		{
			if (y + time > 0 && y + time < col - 1)
			{
				if (board[x][y + time] == board[x][y])
				{
					count++;
				}
			}
			time++;
		}

		if (count == sz)
		{
			return board[x][y];
		}
	}

	//判断下棋处竖排的情况
	for (int i = 0; i < sz; i++)
	{
		count = 0;
		time = -i;
		for (int j = 0; j < sz; j++)
		{
			if (x  + time > 0 && x + time < row - 1)
			{
				if (board[x + time][y] == board[x][y])
				{
					count++;
				}
			}
			time++;
		}

		if (count == sz)
		{
			return board[x][y];
		}
	}
	 
	//判断下棋处右上到左下斜排的情况
	for (int i = 0; i < sz; i++)
	{
		count = 0;
		time = -i;
		for (int j = 0; j < sz; j++)
		{
			if ((y + time > 0 && y + time < col - 1)&&(x + time > 0 && x + time < row - 1))
			{
				if (board[x + time][y + time] == board[x][y])
				{
					count++;
				}
			}
			time++;
		}

		if (count == sz)
		{
			return board[x][y];
		}
	}
	 
	//判断下棋处左上到右下斜排的情况
	for (int i = 0; i < sz; i++)
	{
		count = 0;
		//time = -(sz - i - 1);
		time = i;
		for (int j = 0; j < sz; j++)
		{
			if ((y + time > 0 && y + time < col - 1) && (x + time > 0 && x + time < row - 1))
			{
				if (board[x + time][y + time] == board[x][y])
				{
					count++;
				}
			} 
			//time++;
			time--;
		}

		if (count == sz)
		{
			return board[x][y];
		}
	}

	//判断是否平局
	if (1 == IsFile(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}