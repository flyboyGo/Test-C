#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int a = 0;
//	int b = ~a;
//	//~-->按(2进制)位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	//负数在内存中存储的时候,存储的是二进制的补码
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001--->-1
//	printf("%d\n",b);//使用的,打印的是这个数的原码
//	return 0;
//}

/*
* 只要是整数,内存中存储的都是二进制的补码
* 正数-->原码、反码、补码，相同
* 负数:
* 原码                          --->  反码                               --->补码
* 直接按照正负写出二进制序列     原码的符号位不变,其他位按位取反         反码+1
* -2
* 10000000000000000000000000000010  -->原码
* 11111111111111111111111111111101  -->反码
* 11111111111111111111111111111110  -->补码
*/


//int main() {
//	int a = 10;
//	int b = a++; //后置++,先使用，再++
//	printf("a=%d,b=%d\n",a,b);// 11 10
//	b = 0; a = 10;
//	b = ++a; //前置++,先++,再使用
//	printf("a=%d,b=%d\n", a, b);// 11 11
//	b = 0; a = 10;
//	b = a--; //后置--,先使用,再--
//	printf("a=%d,b=%d\n", a, b);// 9 10
//	b = 0; a = 10;
//	b = --a; //前置--,先--,再使用
//	printf("a=%d,b=%d\n", a, b);// 9 9
//	return 0;
//}

//int main() {
//	int a = (int)3.14; //(数据类型)强制类型转换符
//	printf("%d\n",a);
//	return 0;
//}


//int main() {
//	// 真 -->非0
//	// 假 --> 0
//	// && -->逻辑与
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n",c); // 1
//	int d = 0;
//	c = a && d;
//	printf("%d\n", c); // 0
//
//	// || 逻辑或
//	c = a || b;
//	printf("%d\n", c); // 1
//	c = a || d;
//	printf("%d\n", c); // 1
//	int e = 0;
//	c = e || d;
//	printf("%d\n", c); // 0
//	return 0;
//}


//int main() {
//// expr1 ? expr2 : expr3 -->条件操作符(三目操作符)
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = a > b ? a: b;
//	printf("%d\n",max);
//	return 0;
//}

//逗号表达式
//expr1 , expr2 , expr3 ,...,exprN

int Add(int x,int y) 
{
	int z = 0;
	z = x + y;
	return z;
}
//int main() {
//	int arr[10] = { 0 };
//	arr[4];//[] -->下标引用操作符
//	int a = 10;
//	int b = 10;
//	int sum = Add(a,b);// ()-->函数调用操作符
//	return 0;
//}

//常见关键字
//int float ....

//int main() {
//	auto int a = 10; //局部变量--->自动变量(auto自动类型)
//	register int b = 10; // 建议把a定义成寄存器变量 (register寄存器类型)
//	// int 定义的变量是有符号的
//	// signed int === int (signed默认省略)
//	int c = 10;
//	c = -20;
//	//unsigned int 定义无符号变量
//	  unsigned int num = -1;
//	printf("%d\n",num);
//
//	//union -->联合体、共用体
//	//volatile
//	//typedef -->类型定义、类型重定义
//	typedef unsigned int u_int;
//	//u_int是unsigned int的别名(u_int==>unsigned int)
//	u_int var = 20;
//	printf("%d\n",var);
//
//	auto signed int var2 = 10;
//	printf("%d\n",var2);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//    unsigned int b = 1;
//
//	if (a > b)
//		printf("a > b, a = %d, b = %u\n", a, b);
//	else
//		printf("a <= b, a = %d, b = %u\n", a, b);
//	exit(0);
//	//10000000 00000000 00000000 00000001
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111(无符号输出时,全部当作数值为2^32-1)
//}


//static 修饰局部变量
//局部变量的生命周期变长了
//void test()
//{
//	static int  a = 1;
//	a++;
//	printf("a=%d\n",a);
//}
//int main() {
//	int i = 0;
//	while (i < 5) 
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//static 修饰全局变量
//改变了变量的作用域--->让静态的全局变量只能在自己所在的源文件内部使用,出了源文件就没法使用了
//int main() {
//	//extern -- 声明外部符号的
//	extern int g_val; //全局变量g_val位于stati.c源文件中
//	printf("%d\n", g_val);
//	return 0;
//}
/*
*     1、局部变量： 
        生命周期： 从定义开始， 到该模块结束
        作用域： 该模块内

    2、全局变量：
        生命周期： 从定义开始， 到程序结束
        作用域： 文件内（用 extern 声明则适用于整个工程）

    3、static修饰的局部变量：
        生命周期：从定义开始，到程序结束
        作用域： 该模块内

    4、static修饰全局变量：
        生命周期：从定义开始，到程序结束
        作用域： 被限制在该文件内使用

*/


//static修饰函数
//改变了函数的作用域-->不准确
//static修饰函数,改变了函数的链接属性
//普通的函数默认具有外部链接属性--->static修饰后---->内部链接属性


//声明外部函数
extern int Add(int, int);

//int main() {
//    int a = 10;
//    int b = 20;
//    int sum = Add(a, b);
//    printf("%d\n",sum);
//	return 0;
//}










