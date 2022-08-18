#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//猜字游戏
void menu()
{
	printf("*******************************\n");
	printf("*******  1.paly  0.exit *******\n");
	printf("*******************************\n");
}
// RAND_MAX --> 0x7fff --> 32767
//计算机的起始时间1970年1月1日0时0分0秒
void game()
{
	int ret = 0, guess = 0;
	printf("猜数字游戏\n");
	//时间戳,拿时间戳来设置随机数的生成起始点
	//time_t time(time_t * time)
	// time_t --> typedef __time32_t time_t -->typedef long   __time32_t;
	//srand((unsigned int)time(NULL)); //null空指针
	ret = rand()%100+1; //生成随机数(1~100)

	while (1)
	{
		printf("请输入你猜想的数字>:");
		scanf("%d", &guess);
		if (ret < guess)
		{
			printf("猜大了\n");
		}
		else if (ret > guess)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你,猜对了!\n");
			break;
		}
	}
}

//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏!");
//			break;
//		default:
//			printf("输入错误!");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	//shutdown -s -t 60
//	//system() --执行系统命令
//
//		char input[10] = { 0 };
//		system("shutdown -s -t 60");
//	again:
//		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//		scanf("%s", input);
//			if (0 == strcmp(input, "我是猪")) //比较字符串strcmp()
//			{
//				system("shutdown -a");
//			}
//			else
//			{
//				goto again;
//			}
//	return 0;
//}

//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

int main()
{
	char arr1[] = { "hello,world" };
	// strlen --> strlen(const char * str) --> string lenght 求字符串的长度
	printf("%d\n", strlen(arr1)); 
	// strcpy --> 字符串拷贝 strcpy(char * destinaton, const char * source) 目的地的内容会被覆盖
	char arr2[] = {"#######"};
	char * arr3 = strcpy(arr2, arr1);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	// strcmp --> 字符串比较
	int result = strcmp(arr1,arr2);
	printf("%d\n", result);
	return 0;
}
