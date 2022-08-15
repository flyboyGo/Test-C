#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 10
#include <stdio.h>
#include <string.h>
#include <math.h>
//int main() {
//	//const ->常属性
//	//const int n = 0; //n是变量,但是又是常属性,所以我们说n是常变量
//	//int arr[n] = { 0 };
//	//n = 20;
//
//	//const修饰的常变量
//	//const int num = 4;
//	//printf("%d",num);
//	//num = 8;
//	//printf("%d", num);
//
//	//字面常量
//	3;
//	3.1415926;
//
//	//#define定义的标识符常量
//	int arr[MAX] = { 10 };
//	printf("%d",MAX);
//	printf("%d",arr[0]);
//	return 0;
//}



////枚举常量
////枚举一一列举
////枚举关键字 -> enum
enum Sex
{
	MALE, // 0
	FEMALE, // 1
	SECRET // 2
};
enum Color {
	RED,
	YELLOW,
	BLUE
};

//MALE,FEMALE,SECRET ->枚举常量

//int main() {
//	enum Sex s = FEMALE;
//	printf("%d\n",s);
//	printf("%d\n",MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n",SECRET);
// 
//	enum Color color = BLUE;
//	color = YELLOW; // 枚举类型创建的变量可以更改
//	// BLUE = 6; //err,大括号中的枚举常量无法更改
//	printf("%d",color);
//	return 0;
//}

// 字符串类型
//int main() {
//	"abc"; // 字符串
//	""; // 空字符串  
//
//	char arr1[] = "abc"; // 字符数组(使用字符数组存放字符串,默认会在最后添加'\0')
//	char arr2[] = {'a','b','c','0','\0'}; // '\0'是字符串的结束标志
//	char arr3[] = { 'a','b','c',0 }; // '\0'在ASALL中的数值为0  a 为97  0w为48
//	char arr4[] = { 98,'\0'};
//	char arr5[] = { 99 };
//	// strlen  string length ->计算字符串的长度
//	printf("%s\n",arr1);
//	printf("%d\n", strlen(arr1)); // 3(不包括\0所在字节的长度)
//	printf("%s\n",arr2);
//	printf("%d\n", strlen(arr2)); // 4(不包括\0所在字节的长度)
//	printf("%s\n",arr3);
//	printf("%s\n",arr4);  // b
//	printf("%d", strlen(arr5)); // 随机数
//
//	return 0;
//}


//转义字符(转变字符原来的含义)
//int main() {
//	printf("abc");
//	printf("abc\n");
//	printf("D:\program files (x86)\Microsoft Visual Studio\n");
//	printf("D:\\program files (x86)\\Microsoft Visual Studio\n");
//	printf("%c",'\'');
//	return 0;
//}

//int main() {
//	printf("%d\n",strlen("D:\test\workPlace")); //15
//	printf("%d\n",strlen("c:\test\32\test.c")); // 13
//	// \32 --> 32是2个8进制数字
//	// 32作为8进制代表的那个十进制数字,作为ASCll码值,对应的字符
//	// 32 --> 10进制26 -->作为ASCLL码值代表的字符
//	printf("%c\n",'\32');
//	printf("%c\n",'\43');
//	// \2F --> 2F是2个16进制数字
//	printf("%c\n",'\x2F');
//	return 0;
//}

//int main() {
//	// /* */无法嵌套注释
//
//	return 0;
//}

//int main() {
//	int line = 0;
//	printf("是否努力\n");
//	while (line <= 1000) {
//		printf("%d",line);
//		printf(":敲一行代码\n");
//		line++;
//	}
//	if (line >= 2000) {
//		printf("你可以了!");
//	}
//	else {
//		printf("你失败了!");
//	}
//	
//	return 0;
//}

int Add(int x,int y) {
	int z = x + y;
	return z;
}
// 函数
//int main() {
//	int sum = 0;
//	sum =Add(1,2);
//	printf("sum=%d",sum);
//	return 0;
//}

//int main() {
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
//	char ch[20];//定义一个存放20个字符类型的数组
//	printf("%d\n",arr[9]);
//	printf("%p\n", &arr);
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr[1]);
//	int i = 0;
//	while (i < 10) {
//		printf("%d ",arr[i]);
//		i++;
//	}
//	return 0;
//}


//移位操作符
//int main() {
//	int a = 5 / 2; //取模
//	printf("%d\n",a); // 2
//
//	// 移位操作符(移2进制)
//	// << 左移
//	// >> 右移
//	int b = 1;
//	//整型四个字节--32bit位
//	//00000000000000000000000000000001
//	int c = b << 1;
//	printf("%d\n",c); // 2
//	 c = b << 2;
//	printf("%d\n", c); // 4
//	printf("%d\n",b); // 1 b自身没变
//	b = 1;
//	c = b >> 1;
//	printf("%d\n",c); // 0
//	return 0;
//}


////位操作符
//int main() {
//	int a = 3;
//	int b = 5;
//	int c = a & b; //与运算
//	//011
//	//101
//	//001 --> 1
//	printf("%d\n",c); //1
//
//
//	c = a | b; //或运算
//	//011
//	//101
//	//111  -->7
//	printf("%d\n",c); //7
//
//	c = a ^ b ; //异或运算
//	//011
//	//101
//	//110 -->6
//	printf("%d\n",c); //6
//	return 0;
//}

//赋值操作符
//int main() {
//	int a = 10;
//	a = 20;//=赋值  ==判断相等
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//复合赋值符
//	// += -= *= /= %= &= ^= |= >>= <<=
//	return 0;
//}



//单目操作符
//双目操作符
//三目操作符
//int main() {
//	int a = 10;
//	int b = 20;
//    //a + b; // + 双目操作符
//	
//	//c语言中我们表示真假
//	//0->假(默认为0)
//	//非0 ->真(非零)
//	// !(单目操作符)逻辑反操作符 将假变成真、将真变成假
//	a = -1;
//	printf("%d\n",a); // 0 假
//	printf("%d\n",!a); //1 真
//	printf("%d\n",!!a);//0 假
//
//	int d = +1;//(正号默认省略)
//	d = -a;// -(单目操作符)
//	printf("%d\n",d);
//
//	//sizeof(单目操作符) 计算的变量/类型所在空间的大小,单位是字节
//	printf("%d\n",sizeof(d)); //4
//	printf("%d\n",sizeof(1)); //4
//	printf("%d\n", sizeof(int)); //4
//	printf("%d\n",sizeof d);
//	printf("%d\n",sizeof 5); // 4
//	//printf("%d\n", sizeof int); //error
//
//	int arr[10] = { 0 };//十个整型元素的数组
//	printf("%d\n",sizeof arr); //40个字节
//	int sz = sizeof(arr) / sizeof(arr[0]); // 10个元素空间
//	printf("%d\n",sz);
//	printf("%d\n",sizeof(arr[0]));
//	return 0;
//}

int main() {
	// ~-->按(2进制)位取反
	//00000000 00000000 00000000 00000000
	//11111111 11111111 11111111 11111111
	int a = 0;
	int b = ~a;
	printf("%d\n",b);// -1
	return 0;
}
