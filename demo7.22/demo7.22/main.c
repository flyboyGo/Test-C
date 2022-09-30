#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*
* 那是不同平台下的文件的区别了。
  out是ELF格式，老的out文件不是ELF格式（另外一种Unix下的执行文件格式）
  exe是PE格式，Windows下的可执行文件格式
  bin一般来说也是可执行文档，在Unix下见得居多，一般是同属于一个程序的很多文件的集合。
*/
extern int Add(int, int); //声明外部函数

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//预定义符号
// 
//int main()
//{
//	printf("%s\n", __FILE__); //文件标识
//	printf("%d\n", __LINE__); //行号
//	printf("%s\n", __DATE__); //日期
//	printf("%s\n", __TIME__); //时间
//	printf("%s\n", __FUNCTION__); //函数名
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//		
//	}
//	return 0;
//}


/*
*  预处理指令
*  #define
*  #include
*  #pragma
*  #if
*  #endif
*  #ifdef
*/


/*
* #define 定义标识符、定义宏
* 语法:
* #define name stuff
*/
#define MAX 100
#define STR "hello"

#define us unsigned
#define do_forever for(;;)

//int main()
//{
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//
//	us int a = 100;
//	printf("%d\n", a);
//
//	do_forever; //for(;;);
//	return 0;
//}


#define SQUARE(X) ((X)*(X))
//int main()
//{
//	int ret = SQUARE(5); // int ret = 5*5;
//	printf("ret = %d\n", ret);
//
//	ret = SQUARE(5 + 1); //宏不是传参,而是替换,可以通过给参数加括号,实现效果
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("ret = %d\n", ret);
//
//	// 宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归。
//	ret = 10 * DOUBLE(MAX); 
//	printf("ret = %d\n", ret);
//
//	//当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索
//	printf("MAX = %d\n", ret);
//	return 0;
//}


//#define SUM(X,Y) ((X) + (Y))
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int ret = SUM(x,y);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//#把一个宏参数变成对应的字符串
#define PRINT(X) printf("the value of "#X" is %d\n",X)
#define PRINTS(FORMAT, VALUE)\
               printf("the value is "FORMAT"\n",VALUE);
//int main()
//{ 
//	//C语言中会把相邻的字符串合并在一起
//	char* str1;
//	char* str2;
//	char* str3;
//	str1 = "hello world\n";
//	printf(str1);
//	printf(str2 = "hello ""world\n");
//	printf(str3 = "hel""lo ""world\n");
//	printf("%p %p %p\n", str1, str2, str3); //地址一致,常量字符串
//
//	PRINTS("%d",10);
//
//	int a = 10;
//	int b = 20;
//	PRINT(a); //printf("the value of ""a"" is %d\n",a)
//	PRINT(b); //printf("the value of ""b"" is %d\n",a)
//	return 0;
//}


//##可以把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符。
//这样的连接必须产生一个合法的标识符。否则其结果就是未定义的。

#define CAT(X,Y) X##Y
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", Class84);
//
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n", Class##84);
//	//printf("%d\n", Class84);
//	return 0;
//}



#define MAX(X,Y) ((X)>(Y)?(X):(Y))

//宏的副作用
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++); // int max = ((a++) > (b++) ? (a++) : (b++));
//	
//	printf("%d\n", max);//12
//
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}


//宏与函数对比

//函数
int Max(int x, int y)
{
	return (x > y ? x : y);
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数在调用的时候
//    //会有函数调用和返回的开销
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//
//	int c = 3.0f;
//	int d = 4.0f;
//	//宏在预处理阶段就完成了替换
//	//没有函数的调用和返回的开销
//	max = MAX(c, d);//max = ((c) > (d) ? (c) : (d));
//	printf("max = %d\n", max);
//
//	max = Max(a++, b++);
//	printf("max = %d\n", max); // 20
//
//	return 0;
//}

#define SIZEOF(type) sizeof(type)

//宏可以传数据类型
//int main()
//{
//	int ret = SIZEOF(int); //int ret = sizeof(int)
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


#include <malloc.h>
#define MALLOC(num, type) (type*)malloc(num*sizeof(type))

//int main()
//{
//	int* p = MALLOC(10, int); //int* p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}


#define MAX 200

//int main()
//{
//	printf("MAX = %d\n", MAX);
//
////如果现存的一个名字需要被重新定义，那么它的旧名字首先要被移除
//#undef MAX  //移除宏定义
//
//	//printf("MAX = %d\n", MAX);
//	return 0;
//}