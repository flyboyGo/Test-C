#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//打印数组的信息不包括地雷信息
void PrintBoard(char board[ROW][COL], int row, int col)
{
	//打印横坐标
	for (int r = 1; r <= row; r++)
	{
		printf("   %d",r);
	}
	printf("\n");
	//纵坐标的计数器
	int c = 1;
	//打印棋盘信息
	for (int i = 0; i < row; i++)
	{
		//打印棋盘的分割行信息
		printf("  ");
			for (int k = 0; k < col; k++)
			{
				printf("----");
			}
			printf("\n");

		//打印棋盘的数据信息
		for (int j = 0; j < col; j++)
		{
			if (j == 0)
			{
				printf("%d| %c |", c, board[i][j]);
				c++;
			}
			else if (j == col -1)
			{
				printf(" %c |\n", board[i][j]);
			}
			else
			{
				printf(" %c |", board[i][j]);
			}
		}
	}
	//打印最后一行分割符
	printf("  ");
	for (int k = 0; k < col; k++)
	{
		printf("----");
	}
	printf("\n");
}
 
//初始化数组,安排地雷的信息
void InitBoard(char board[ROW][COL], char board2[ROW][COL], int row, int col, int count)
{
	//初始化数组,使得数组默认信息为 '空格'
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = '#';
			board2[i][j] = '#';
		}
	}
	//随机生成地雷的位置，安排在数组当中
	int x = 0, y = 0, time = 0;
	while (time < 10)
	{
		x = rand() % row;
		y = rand() % col;
		if ((x > 0 && x < row) && (y > 0 && y < col))
		{
			if (board[x][y] == '#')
			{
				board[x][y] = '*';
				time++;
			}
		}
	}
}

//统计剩余的地雷数
int TotalTarpedo(char board[ROW][COL], char board2[ROW][COL], int row, int col, int count)
{
	int c = count;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
			{
				if (board2[i][j] == 'X')
				{
					c--;
				}
			}
		}
	}
	return c;
}

//玩家排雷
char PlayerExclude(char board[ROW][COL], char board2[ROW][COL], int row, int col, int count)
{
	int x = 0, y = 0;
	printf("输入排雷的位置:>");
	scanf("%d %d", &x, &y);
	while (1)
	{
		if ((x > 0 && x <= row) && (y > 0 && y <= col))
		{
			board2[x - 1][y - 1] = 'X';
			if (TotalTarpedo(board, board2, row, col, count) == 0)
			{
				return 'W';
			}
			else
			{
				return 'C';
			}
		}
		else
		{
			printf("输入的位置有误,请重新输入!\n");
		}
	}
}

//计算玩家所点击位置周围九宫格的地雷数
int TotalAroundTarpedo(char board[ROW][COL], int x, int y)
{
	int count = 0;
		if (board[x - 1][y - 1] == '*')count++;
		if (board[x - 1][y] == '*')count++;
		if (board[x - 1][y + 1] == '*')count++;
		if (board[x][y + 1] == '*')count++;
		if (board[x + 1][y + 1] == '*')count++;
		if (board[x + 1][y] == '*')count++;
		if (board[x + 1][y - 1] == '*')count++;
		if (board[x][y - 1] == '*')count++;
	return count;
}

//玩家点击棋盘,提示信息展开
void ShowInfo(char board[ROW][COL], char board2[ROW][COL], int row, int col, int x, int y)
{
	int count = 0;
		if (((x - 1 > 0) && (x - 1 < row)) && ((y - 1 > 0) && (y - 1 < col)))
		{
			count = TotalAroundTarpedo(board, x - 1, y - 1);
			if (count == 0)
			{
				board2[x - 1][y - 1] = ' ';
			}
			else
			{
				board2[x - 1][y - 1] = count + 48;
			}
		}
		if (((x - 1 > 0) && (x - 1 < row)))
		{
			count = TotalAroundTarpedo(board, x - 1, y);
			if (count == 0)
			{
				board2[x - 1][y] = ' ';
			}
			else
			{
				board2[x - 1][y] = count + 48;
			}
		}
		if (((x - 1 > 0) && (x - 1 < row)) && ((y + 1 > 0) && (y + 1 < col)))
		{
			count = TotalAroundTarpedo(board, x - 1, y + 1);
			if (count == 0)
			{
				board2[x - 1][y + 1] = ' ';
			}
			else
			{
				board2[x - 1][y + 1] = count + 48;
			}
		}
		if (((y + 1 > 0) && (y + 1 < row)))
		{
			count = TotalAroundTarpedo(board, x, y + 1);
			if (count == 0)
			{
				board2[x][y + 1] = ' ';
			}
			else
			{
				board2[x][y + 1] = count + 48;
			}
		}
		if (((x + 1 > 0) && (x + 1 < row)) && ((y + 1 > 0) && (y + 1 < col)))
		{
			count = TotalAroundTarpedo(board, x + 1, y + 1);
			if (count == 0)
			{
				board2[x + 1][y + 1] = ' ';
			}
			else
			{
				board2[x + 1][y + 1] = count + 48;
			}
		}
		if (((x + 1 > 0) && (x + 1 < row)))
		{
			count = TotalAroundTarpedo(board, x + 1, y);
			if (count == 0)
			{
				board2[x + 1][y] = ' ';
			}
			else
			{
				board2[x + 1][y] = count + 48;
			}
		}
		if (((x + 1 > 0) && (x + 1 < row)) && ((y - 1 > 0) && (y - 1 < col)))
		{
			count = TotalAroundTarpedo(board, x + 1, y - 1);
			if (count == 0)
			{
				board2[x + 1][y - 1] = ' ';
			}
			else
			{
				board2[x + 1][y - 1] = count + 48;
			}
		}
		if (((y - 1 > 0) && (y - 1 < row)))
		{
			count = TotalAroundTarpedo(board, x, y - 1);
			if (count == 0)
			{
				board2[x][y - 1] = ' ';
			}
			else
			{
				board2[x][y - 1] = count + 48;
			}
		}
}

//玩家点击棋盘
char PlayerClick(char board[ROW][COL], char board2[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("输入点击的位置:>");
	scanf("%d %d", &x, &y);
	while (1)
	{
		if ((x > 0 && x <= row) && (y > 0 && y <= col))
		{
			
			if (board[x - 1][y - 1] == '*')
			{
				return 'L';
			}
			else if(board[x - 1][y - 1] == '#')
			{
				board2[x - 1][y - 1] = ' ';
				ShowInfo(board, board2, row, col, x - 1, y - 1);
				return 'C';
			}
		}
		else
		{
			printf("输入的位置有误,请重新输入!\n");
		}
	}
}

//玩家取消排雷
void PlayerCancel(char board[ROW][COL], char board2[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("输入取消扫雷的位置:>");
	scanf("%d %d", &x, &y);
	if ((x > 0 && x <= row) && (y > 0 && y <= col))
	{
		board2[x - 1][y - 1] = '#';
	}

}