#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

//写一段代码告诉我们当前机器的字节序是什么
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//函数形式求字节序是什么
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return *p;
}

int check_sys_plus()
{
	int i = 1;
	return (*(char*)&i);
}
//int main()
//{
//	int ret = check_sys_plus();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001 原码
//	//11111111111111111111111111111110 反码
//	//11111111111111111111111111111111 补码
//	//截断
//	//11111111 补码
//
//	signed char b = -1;
//	//11111111 补码
//
//	unsigned char c = -1;
//	//11111111 补码
//
//	printf("%a=%d,b=%d,c=%d", a, b, c);
//	//整型提升,如果最高位是符号位,补符号位;如果无符号位,用0补齐
//	//111111111111111111111111  a
//	//111111111111111111111111  b
//	//000000000000000011111111  c
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000  原码
//	//11111111111111111111111101111111  反码
//	//11111111111111111111111110000000  补码
//	//10000000 截断
//	//11111111111111111111111110000000 整型提升 - 补码
//	//无符号数输出,无符号位(无符号整数,三码合一)
//	//4294967168
//	printf("%u\n", a); //打印无符号整数
//	//%d -- 打印十进制的有符号数
//	//%u -- 打印十进制的无符号数
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a); //4294967168
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%d\n", a); // -128
//	printf("%u\n", a); // 4294967168
//
//	char b = 128; //127 + 1
//	printf("%d\n", b); // -128
//	printf("%u\n", b); // 4294967168
//	return 0;
//}

//int main()
//{
//	//1000000 00000000 00000000 00010100 原码 -20
//	//1111111 11111111 11111111 11101011 反码 
//	//1111111 11111111 11111111 11101100 补码 
//	//相加
//	//0000000 00000000 00000000 00001010 补码 10
//	//结果
//	//1111111 11111111 11111111 11110110 补码
//	//1111111 11111111 11111111 11110101 反码
//	//0000000 00000000 00000000 00001010 原码 -10
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i +j);
//	//按照补码的形式近进行计算,最后格式化成为有符号整数
//	return 0;
//}


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//浮点数的表示
//int main()
//{
//	double d = 1E10;
//	printf("%.2lf\n",d); //10000000000.00
//	return 0;
//}


//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为: %d\n", n);
//	printf("*pFloat的值为: %f\n", *pFloat);
//	return 0;
//}

