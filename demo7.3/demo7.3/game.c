#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ӡ�������Ϣ������������Ϣ
void PrintBoard(char board[ROW][COL], int row, int col)
{
	//��ӡ������
	for (int r = 1; r <= row; r++)
	{
		printf("   %d",r);
	}
	printf("\n");
	//������ļ�����
	int c = 1;
	//��ӡ������Ϣ
	for (int i = 0; i < row; i++)
	{
		//��ӡ���̵ķָ�����Ϣ
		printf("  ");
			for (int k = 0; k < col; k++)
			{
				printf("----");
			}
			printf("\n");

		//��ӡ���̵�������Ϣ
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
	//��ӡ���һ�зָ��
	printf("  ");
	for (int k = 0; k < col; k++)
	{
		printf("----");
	}
	printf("\n");
}
 
//��ʼ������,���ŵ��׵���Ϣ
void InitBoard(char board[ROW][COL], char board2[ROW][COL], int row, int col, int count)
{
	//��ʼ������,ʹ������Ĭ����ϢΪ '�ո�'
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = '#';
			board2[i][j] = '#';
		}
	}
	//������ɵ��׵�λ�ã����������鵱��
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

//ͳ��ʣ��ĵ�����
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

//�������
char PlayerExclude(char board[ROW][COL], char board2[ROW][COL], int row, int col, int count)
{
	int x = 0, y = 0;
	printf("�������׵�λ��:>");
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
			printf("�����λ������,����������!\n");
		}
	}
}

//������������λ����Χ�Ź���ĵ�����
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

//��ҵ������,��ʾ��Ϣչ��
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

//��ҵ������
char PlayerClick(char board[ROW][COL], char board2[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("��������λ��:>");
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
			printf("�����λ������,����������!\n");
		}
	}
}

//���ȡ������
void PlayerCancel(char board[ROW][COL], char board2[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("����ȡ��ɨ�׵�λ��:>");
	scanf("%d %d", &x, &y);
	if ((x > 0 && x <= row) && (y > 0 && y <= col))
	{
		board2[x - 1][y - 1] = '#';
	}

}