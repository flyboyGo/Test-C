#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//游戏的菜单
void menu()
{
	printf("******************************\n");
	printf("******* 1.play  0.exit *******\n");
	printf("******************************\n");
}

//游戏的核心具体实现
void game()
{
	char ret = 0;
	//数组-存放玩家走出的棋盘信息
	char board[ROW][COL] = { 0 };// 全部为空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//开始下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢!\n");
		DisplayBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("电脑赢!\n");
		DisplayBoard(board, ROW, COL);
	}
	else
	{
		printf("平局!\n");
		DisplayBoard(board, ROW, COL);
	}
}

//游戏的整体逻辑
void begin()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏!\n");
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误,请重新选择!\n");
			break;
		}
	} while (input);
}

//测试三子棋游戏
//int main()
//{
//	begin();
//	return 0;
//}