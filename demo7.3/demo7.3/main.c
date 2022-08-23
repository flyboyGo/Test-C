#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("****** 1.play 0.exit ******\n");
	printf("***************************\n");
}

void game() {
	//�洢���׵������Ϣ������
	char board[ROW][COL] = {0};
	char board2[ROW][COL] = { 0 };
	char ret = 0;
	//��ʼ������,���ŵ��׵���Ϣ
	InitBoard(board, board2, ROW, COL, COUNT);
	//��ӡ���̵���Ϣ
	PrintBoard(board2, ROW, COL);
	//��ҿ�ʼ����
	int choice = 0;
	int times = 0;
	while (1)
	{
		printf("****** 2.���� 3.������� 4.ȡ������ ******\n");
		printf("����ѡ��:>");
		scanf("%d", &choice);
	
		if (choice == 2) //�������
		{
			if (times >= COUNT)
			{
				printf("���׵Ĵ����Ѿ�������!\n");
			}
			else
			{
				ret = PlayerExclude(board, board2, ROW, COL, COUNT);
				PrintBoard(board2, ROW, COL);
				times++;
			}	
		}
		else if (choice == 3)//��ҵ������
		{
			ret = PlayerClick(board, board2, ROW, COL);
			PrintBoard(board2, ROW, COL);
		}else if (choice == 4)//���ȡ��ɨ��
		{
			PlayerCancel(board, board2, ROW, COL);
			PrintBoard(board2, ROW, COL);
			times--;
		}
		else
		{
			printf("�������,����������!\n");
		}
		//�ж����еĽ��
		if (ret == 'W')
		{
			printf("��Ӯ��!\n");
			break;
		}
		else if (ret == 'L')
		{
			printf("������!\n");
			break;
		}
	}
}

void begin()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("����ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����,����ѡ��:>\n");
			break;
		}
	} while (input);
}

int main()
{
	begin();
	return 0;
}