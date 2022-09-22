#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//位段的定义
//位段 -- 二进制位
//
struct S
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};
//47bit -- 6Byte = 6*8bit

struct S2
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

struct S3
{
	int a;
	int b;
	char c;
};
// int main()
// {
// 	struct S s;
// 	printf("%ld\n", sizeof(s)); //8个字节

// 	struct S2 s2;
// 	printf("%ld\n", sizeof(s2));

// 	struct S3 s3;
// 	printf("%p %p %p %p\n", &s3, &(s3.a), &(s3.b), &(s3.c));
// }


//枚举
//枚举定义

//枚举类型
enum Sex
{
	//枚举的可能取值
	MALE = 2, //常量初始化赋初值
	FEMALE = 4,
	SECRET
};

// enum Color
// {
// 	//可能的取值 -- 常量
//     RED, //0
// 	GREEN, //1
// 	BLUE //2
// };

// int main()
// {
// 	enum Sex s = MALE;
// 	s = FEMALE;
// 	//s = MAN; //error

// 	enum Color c = BLUE;

// 	printf("%d %d %d\n", RED, GREEN, BLUE);
// 	printf("%d %d %d\n", MALE, FEMALE, SECRET);

// 	enum Color c2 = 2; // error

// 	return 0;
// }

#define RED 0
#define GREEN 1
#define BLUE 2

// int main()
// {
// 	int color = RED;
// 	printf("%d\n", color);
// 	return 0;
// }


//枚举的优点
/*
	1. 增加代码的可读性和可维护性
	2. 和#define定义的标识符比较枚举有类型检查，更加严谨。
	3. 防止了命名污染（封装）
	4. 便于调试
	5. 使用方便，一次可以定义多个常量
*/


////联合体(共用体)
union Un
{
	char c;
	int i;
};


// int main()
// {
// 	union Un u;
// 	printf("%d\n", sizeof(u)); //4

// 	printf("%p\n", &u);
// 	printf("%p\n", &(u.c));
// 	printf("%p\n", &(u.i)); //以上三个地址一致
// 	return 0;
// }


// int main()
// {
// 	//int a = 0x11223344;
// 	//低地址----------------高地址
// 	//.....[][][11][22][33][44][][]..... 大端存储模式
// 	//.....[][][44][33][22][11][][]..... 小端存储模式
// 	//讨论一个数据,放在内存中的存放的字节顺序
// 	//大小端问题

// 	int a = 1;
// 	if(*(char*)&a == 1)
// 	{
// 		printf("小端\n");
// 	}
// 	else  if(*(char*)&a == 0)
// 	{
// 		printf("大端\n");
// 	}
// 	return 0;
// }

int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c; //1--小端,0--大端
}

// int main()
// {
// 	printf("%d\n", check_sys());
// 	return 0;
// }

//枚举类型的大小
// int main()
// {
// 	enum Sex s = MALE;
// 	printf("%d\n", sizeof(s)); //4
// }


//联合体(union)的大小
union u
{
	int a; //4   4/8 4
	char arr[5]; //5  1/8 1
};
int main()
{
	union u n;
	printf("%d\n", sizeof(n)); //8
	return 0;
}