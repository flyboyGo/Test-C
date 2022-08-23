#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��Ϸ�Ĳ˵�
void menu()
{
	printf("******************************\n");
	printf("******* 1.play  0.exit *******\n");
	printf("******************************\n");
}

//��Ϸ�ĺ��ľ���ʵ��
void game()
{
	char ret = 0;
	//����-�������߳���������Ϣ
	char board[ROW][COL] = { 0 };// ȫ��Ϊ�ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//��ʼ����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ!\n");
		DisplayBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("����Ӯ!\n");
		DisplayBoard(board, ROW, COL);
	}
	else
	{
		printf("ƽ��!\n");
		DisplayBoard(board, ROW, COL);
	}
}

//��Ϸ�������߼�
void begin()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ!\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����,������ѡ��!\n");
			break;
		}
	} while (input);
}

//������������Ϸ
//int main()
//{
//	begin();
//	return 0;
//}