#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ������ʵ��
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

//��ӡ����ʵ��
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//��ӡ������
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
		//��ӡ�ָ���
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

//�������ʵ��
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("�����:>\n");
	printf("������Ҫ�µ�����:>");
	while (1)
	{
		scanf("%d %d", &x, &y);
		//�ж�x,y�ĺϷ���
		if ((x >= 1 && x <= ROW) && (y >= 1 && y <= COL))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ��,����������!\n");
			}
		}
		else
		{
			printf("����Ƿ�,����������:>\n");
		}
	}
}

//��������ʵ��
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("������:>\n");
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

//�ж������Ƿ��Ѿ�����
//����1,����
//����0,δ��
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

//�ж���Ϸ��Ӯ
char IsWin(char board[ROW][COL], int row, int col)
{
	//�ж����е����
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	//�ж����е����
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] !=' ')
		{
			return board[0][i];
		}
	}
    //�ж϶Խ��ߵ����
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}
	
	//�ж��Ƿ�ƽ��
	if (1 == IsFile(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}

//�ж���Ϸ��Ӯͨ�ð�(����Ϊ:������Ϣ���顢���̵����������̵�����������ĸ��������������)
char IsWinPlus(char board[ROW][COL], int row, int col, int sz, int b_x, int b_y)
{
	int count = 0;
	int time = 0;
	//�����������-1,��������Ĺ���
	int x = b_x - 1, y = b_y -1;
	//�ж����崦���ŵ����
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

	//�ж����崦���ŵ����
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
	 
	//�ж����崦���ϵ�����б�ŵ����
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
	 
	//�ж����崦���ϵ�����б�ŵ����
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

	//�ж��Ƿ�ƽ��
	if (1 == IsFile(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}