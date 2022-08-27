#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//模拟实现strcpy库函数
void my_strcpy(char* dest, const char* src)
{
	/*for (int i = 0; i <= strlen(src); i++)
	{
		*(dest + i) = *(src + i);
	}*/

	//while (*src != '\0')
	//{
	//	*dest = *src;
	//	dest++;
	//	src++;
	//}
	//*dest = *src; // *src = '\0'


	//while (*dest++ = *src++) //*src将值赋予dest,*src赋予的值作为while循环判断的依据
	//{
	//	;
	//}

	/*if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)
		{
			;
		}
	}*/

	//断言 assert(需要引入头文件)
	//assert(dest != NULL); //断言(表达式的结果为假,断言执行)
	//assert(src != NULL); //断言
	//while (*dest++ = *src++)
	//{
	//	;
	//}
}

//最终版
char* my_strcpy_plus(char * dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL); //断言(表达式的结果为假,断言执行)
	assert(src != NULL); //断言
	//把src指向的字符串拷贝到dest指向的空间,包含'\0'字符
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy_plus(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//    int num = 10;
//	//const int* p = &num; 
//	//*p = 20; // err const放置在指针变量*的左边时,修饰的是*p,也就是说,不能通过改变*p(num)的值
//	      
//	//int n = 100;
//	//int* const p = &num;
//	//p = &n;  // const放置在指针变量* 的右边时, 修饰的是指针变量p本身,也就是说p不能改变了
//	printf("%d\n", num);
//	return 0;
//}

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL); //断言指针,保证指针的有效性
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}