#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 代码1
//(*(void (*)())0)();
// (1)把0强制类型转换成:void (*) ()(函数指针类型) --- 0此时为一个函数的地址
// (2)调用0地址处的该函数

//代码2
//void (* signal(int, void(*)(int)))(int);
//(1)signal是一个函数声明
//(2)signal函数的参数有2个，第一个是int,第二个是函数指针,该函数指针指向的函数的参数是int,返回类型是void
//(3)signal函数的返回类型也是一个函数指针:该函数指针指向的函数的参数是int,返回类型是void

//简化函数指针类型 void (* )(int)
//重命名
//typedef void(* pfun_t )(int);
//typedef unsigned int uint;
//代码2简化为
//pfun_t signal(int, pfun_t);


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	//printf("%d\n", *pa(2 ,3)); //err
//	//printf("%d\n", (**pa)(2, 3));
//	//printf("%d\n", (***pa)(2, 3));
//	return 0;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//函数指针数组
//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要数组,这个数组可以存放四个4个函数的地址 -- 函数指针的数组
//	int (*pa)(int, int) = Add; 
//	int (*parr[4]) (int, int) = {Add,Sub,Mul,Div};//函数指针数组
//	int (*parr2[4]) (int, int) = { &Add,&Sub,&Mul,&Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//		printf("%d\n", (*(parr2[i]))(2, 3));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{

}

//int main()
//{
//	//写一个函数指针pf,能够指向my_strcp
//	char* (*pf)(char*, const char*) = &my_strcpy;
//	//写一个函数指针数组pfArr,能够存放4个my_strcpy函数的地址
//	char* (*pfArr[4])(char*, const char*);
//	return 0;
//}


//计算器
void menu()
{
	printf("**************************\n");
	printf("****** 1.add  2.sub ******\n");
	printf("****** 3.mul  4.div ******\n");
	printf("****** 5.xor  0.exit******\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//改进版
//回调函数的使用
void Cal(int (*pf)(int, int))
{
	int x = 0, y = 0;
	printf("请输入两个操作数:>");
	scanf("%d %d", &x, &y);
	printf("%d\n", pf(x, y));
}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Cal(Add);
//			break;
//		case 2:
//			Cal(Sub);
//			break;
//		case 3:
//			Cal(Mul);
//			break;
//		case 4:
//			Cal(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//计算机改进版
//异或计算函数
int Xor(int x, int y)
{
	return x ^ y;
}

//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	//pfArr函数指针数组 -- 转移表
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入操作数:>");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出!\n");
//		}
//		else
//		{
//			printf("选择错误!\n");
//		}
//	} while (input);
//
//	return 0;
//}

void Again()
{
	printf("go on");
}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//取出数组的地址
//
//	int (*pf)(int, int);// 函数指针
//	int (*pfArr[4])(int, int);// pfArr是一个数组--函数指针数组
//	//ppfArr指向【函数指针数组】的指针
//	int (*(*pfArr)[4])(int, int) = &pfArr; //指向函数指针数组的指针
//	//ppfArr 是一个数组指针,指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int, int)
//	//
//	return 0;
//}