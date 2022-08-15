#define _CRT_SECURE_NO_WARNINGS 1

//包含一个叫stdio.h的文件
//std->标准standard,i->inout,o->output
#include <stdio.h>
//int 是整型的含义
//main前面的int表示main函数调用返回一个整型值
/*
int main() //主函数 -> 程序的入口->main函数有且仅有一个
{
	//这里完成任务
	//屏幕上输出hello world
	//函数-->printf ->function打印函数
	//库函数->c语言本身提供给我们使用的函数
	//#include
	printf("hello world\n");
	return 0;
}
*/


/*
 这种写法已经过时了
void main()
{

}
*/

//%d -> 打印整型
//%c -> 打印字符类型
//%f -> 打印浮点类型->小数
//%p -> 以地址的形式打印
//%x -> 打印16进制数字
//int main() {
//	// char ->字符类型
//	char ch = 'A';//内存
//	printf("%c\n",ch);//%c->打印字符格式的数据
//	
//	// short int ->短整型
//
//	// int ->整型
//	int age = 20;
//	printf("%d\n",age);//%d->打印整型十进制数据
//
//	// long -> 长整型
//	long num = 100;
//	printf("%d\n",num);
//
//	//float ->单精度浮点类型
//	float f = 5.0;
//	printf("%f\n",f); // 5.000000
//
//	//double ->双精度浮点类型
//	//单精度和双精度默认都是6位小数
//	double d = 3.4;
//	printf("%f\n", d); //3.400000
//	printf("%lf\n",d); //3.400000
//
//	return 0;
//}

//同一数据类型的无符号、有符号所在的空间大小是一致的
//计算机中的单位
//bit 比特位
//byte 字节  一个字节=8个比特位
//kb   1kb = 1024 byte
//mb   1mb = 1024 kb
//gb   1gb = 1024 mb
//tb   1tb = 1024 gb
//pb   1pb = 1024 tb

//int main() {
//	printf("%d\n", sizeof(char));  // 1
//	printf("%d\n", sizeof(short)); // 2
//	printf("%d\n", sizeof(int));   // 4
//	printf("%d\n", sizeof(long));  // 4
//	printf("%d\n", sizeof(long long)); // 8
//	printf("%d\n", sizeof(float));  // 4
//	printf("%d\n", sizeof(double)); // 8
//	return 0;
//}

//int main() {
//	//年龄 20
//	short age = 20; //向内存申请2个字节=16bit位,存放20
//	float weight = 95.6f; //(95.6编译器默认是double类型,需要在后面添加f,表明单精度类型)向内存申请4个字节,存放小数
//	/*c语言标准规定
//	sizeof(long)>=sizeof(int)*/
//	return 0;
//}

//int num = 20;//全局变量->定义在代码块({})之外的变量
//int main() {
//	int num = 10;//局部变量->定义在代码块({})之内的变量
//	printf("%d\n",num); //全局变量和全局变量的名字建议不要相同
//	                    //当局部变量和全局变量的名字相同时,局部变量优先
//	return 0;
//}

//int a = 100;
//int main() {
//	{
//		int a = 10;
//	}
//	printf("%d\n",a);
//	return 0;
//}


int main() {
	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	//输入数据->使用输入函数scanf
	scanf("%d%d",&num1,&num2);//&取地址符号
	int sum = 0;
	//C语言语法规定,变量要定义在当前代码块的最前面
	sum = num1 + num2;
	printf("sum=%d",sum);
	return 0;
}

//int main() {
//	//局部变量的作用域
//	int num = 0;
//	{
//		printf("%d", num);
//	}
//	return 0;
//}

//int global = 2022;
//void fn() {
//	printf("%d",global);
//}
//int main() {
// 全局变量作用域
//	printf("%d\n",global);
//	fn();
//	return 0;
//}

//int main() {
//	//为声明的标识符
//	//声明extern外部符号
//	extern int g_val;
//	printf("%d",g_val);
//	return 0;
//}

//int main() {
//	{
//		int a = 10;
//		printf("%d\n",a);
//	}
//	/*prting("%d\n",a);*/
//	return 0;
//}

//scanf是C语言自身提供的,所有的编译器都提供支持
//scanf_s不是C语言的标准,VS编译器提供的,其他编译器无法识别,跨平台性差、可移植性差、,建议最好不使用
//解决方案是在源文件的第一行添加 #define _CRT_SECURE_NO_WARNINGS 1

//scanf
//strcpy
//strlen
//strcat
//...
//不安全的

