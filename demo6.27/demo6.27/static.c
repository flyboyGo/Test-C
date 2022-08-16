#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 100
#include <stdio.h>
#include <string.h>
static int g_val = 2020; //全局变量

//#define定义常量和宏

//定义一个函数
static int Add(int x,int y) 
{
	int z = x + y;
	return z;
}

//函数的实现
int getMax(int x,int y)
{
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

//宏的实现
#define getMAX(X,Y) (X>Y?X:Y)


//int main() {
//	int a = MAX;
//	printf("%d\n",a);
//	int b = 10;
//	int c = 20;
//
//	//函数
//	 int max1 = getMax(c, b);
//	 printf("%d\n",max1);
//	
//	//宏的方式
//	int max2 = getMAX(c, b); //将getMAX(c,b)替换成(c>b?c:b);
//	printf("%d\n", max2);
//
//	return 0;
//}


//int main() 
//{
//	int a = 10;//4个字节
//	//有一种变量是用来存放地址的--->指针变量
//	int* p = &a;//取地址
//	printf("%p\n",p);
//	printf("%p\n",&a); //地址
//	//*p -->解引用操作符
//	*p = 20;
//	printf("%d\n",a);
//
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n",ch);
//	return 0;
//}



//int main()
//{
//	int a = 0; //申请了4个字节的空间
//	printf("%p\n",&a);
//	int* p = &a; //p是一个存放地址的变量-->指针变量
//	printf("%p\n",p);
//	*p = 1; //*解引用操作符/间接访问操作符
//	printf("%d\n",a);
//
//	double d = 3.14;
//	double* p2 = &d;
//	printf("%p\n",p2);
//	*p2 = 3.141592;
//	printf("%lf\n",d);
//	printf("%lf\n",*p2);
//
//	printf("%d\n", sizeof(p2)); // 32位平台-->4个字节  64位平台-->8个字节
//
//	printf("%d\n",sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}


//结构体
//创建结构体类型
struct Book
{
	char name[20]; //C语言程序设计 (name数组)
	short price; // 45 (price变量)
};
//int main()
//{
//	//利用结构体类型-->创建一个该类型的结构体变量
//	// . 结构体变量.成员
//	// -> 结构体指针->成员
//	struct Book b1 = {"C语言程序设计",55};
//	printf("书名:%s,价格:%d\n",b1.name,b1.price);
//	b1.price = 15;
//	printf("价格:%d\n",b1.price);
//
//	struct Book* pb = &b1;
//	printf("%p\n",pb);
//	printf("书名:%s,价格:%d\n",(*pb).name,pb->price);
//
//	strcpy(b1.name,"C++程序设计");  //strcpy-->string copy -->字符串拷贝-->库函数--string.h
//	printf("书名:%s\n", pb->name);
//	return 0;
//}

