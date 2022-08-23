#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("****** 1.play 0.exit ******\n");
	printf("***************************\n");
}

void game() {
	//存储地雷等相关信息的数组
	char board[ROW][COL] = {0};
	char board2[ROW][COL] = { 0 };
	char ret = 0;
	//初始化数组,安排地雷的信息
	InitBoard(board, board2, ROW, COL, COUNT);
	//打印棋盘的信息
	PrintBoard(board2, ROW, COL);
	//玩家开始操作
	int choice = 0;
	int times = 0;
	while (1)
	{
		printf("****** 2.排雷 3.点击棋盘 4.取消排雷 ******\n");
		printf("作出选择:>");
		scanf("%d", &choice);
	
		if (choice == 2) //玩家排雷
		{
			if (times >= COUNT)
			{
				printf("排雷的次数已经用完了!\n");
			}
			else
			{
				ret = PlayerExclude(board, board2, ROW, COL, COUNT);
				PrintBoard(board2, ROW, COL);
				times++;
			}	
		}
		else if (choice == 3)//玩家点击棋盘
		{
			ret = PlayerClick(board, board2, ROW, COL);
			PrintBoard(board2, ROW, COL);
		}else if (choice == 4)//玩家取消扫雷
		{
			PlayerCancel(board, board2, ROW, COL);
			PrintBoard(board2, ROW, COL);
			times--;
		}
		else
		{
			printf("输入错误,请重新输入!\n");
		}
		//判断运行的结果
		if (ret == 'W')
		{
			printf("你赢了!\n");
			break;
		}
		else if (ret == 'L')
		{
			printf("你输了!\n");
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
		printf("作出选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误,重新选择:>\n");
			break;
		}
	} while (input);
}

int main()
{
	begin();
	return 0;
}