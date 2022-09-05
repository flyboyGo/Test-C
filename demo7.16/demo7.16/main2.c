#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//字符串比较
//int strncmp ( const char * str1, const char * str2, size_t num );
/*
* 比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完
*/
int my_strncmp(const char* str1, const char* str2, int count)
{
	assert(str1);
	assert(str2);
	assert(count > 0);
	while (count)
	{
		count--;
		if (*str1 == *str2)
		{
			if (count == 0)
			{
				return 0;
			}
			else
			{
				str1++;
				str2++;
			}
		}
		else
		{
			if (count == 0)
			{
				return *str1 - *str2;
			}
			str1++;
			str2++;
		}
	}
}
//int main()
//{
//	const char* p1 = "abcdefg";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 3);
//	printf("%d\n", ret);
//    ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	ret = my_strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}


//查找字符串
//char * strstr ( const char *str1, const char * str2);
/*
* Returns a pointer to the first occurrence of str2 in str1,
   or a null pointer if str2 is not part ofstr1.
*/
/*
* NULL--空指针
* NUL/Null -- '\0'
*/
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	//特殊情况
	if ((strlen(str2) == 0) || (strlen(str2) > strlen(str1)))
	{
		return NULL;
	}
	//正常情况
	int i = 0, j = 0, count = 0;
	for (i = 0; i <= strlen(str1) - strlen(str2); i++)
	{
		for (j = 0; j < strlen(str2); j++)
		{
			if (*(str1 + i + j) == *(str2 + j))
			{
				count++;
			}
			else
			{
				count = 0;
				break;
			}
		}
		if (count == strlen(str2))
		{
			return str1 + i; //找到了
		}
	}
	return NULL; //找不到
}
char* my_strstr_plus(const char* p1, const* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	if (*p2 == '\0')
	{
		return (char*)p1;
	}

	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;

		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//找到了
		}
		if (*s1 == '\0')
		{
			return NULL;
		}
		cur++;
	}
	return NULL; //找不到字串
}


//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "defg";
//	//char* ret = strstr(p1, p2);
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("字串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}


//分割字符串
//char * strtok ( char * str, const char * sep );
/*
*  1、sep参数是个字符串，定义了用作分隔符的字符集合
   2、第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
	  strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：
   3、strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容
	  并且可修改。）
   4、strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串
	  中的位置。
   5、strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标
	  记。
   6、如果字符串中不存在更多的标记，则返回 NULL 指针。
*/

char* my_strtok(char* str, const char* seq)
{
	assert(seq);
	static char buf[100] = { 0 };
	static char* begin = NULL;
	char* check = NULL;
	static char* tmp = NULL;
	static int count = 0;
	if (str == NULL)
	{
		begin++;
		tmp = begin;
		while ((*begin) != '\0')
		{
			check = (char*)seq;
			while (*check != '\0')
			{
				if (*begin == *check)
				{
					*begin = '\0';
					return tmp;
				}
				else
				{
					check++;
				}
			}
			begin++;
		}
		if ((*(tmp + strlen(tmp)) == '\0') && (count == 0))
		{
			count++;
			return tmp;
		}
		else
		{
			return NULL;
		}
	}
	else if (str != NULL)
	{
		strcpy(buf, str);
		begin = buf;
		tmp = begin;
		while ((*begin) != '\0')
		{
			check = (char*)seq;
			while (*check != '\0')
			{
				if (*begin == *check)
				{
					*begin = '\0';
					return tmp;
				}
				else
				{
					check++;
				}
			}
			begin++;
		}
		return NULL;
	}
}

// int main()
// {
// 	char arr[] = "flyboy@qq.com";
// 	char* p = "@.";
// 	char* p2 = ".";
//     char* p3 = "*";

// 	char buf[1024] = { 0 };
// 	strcpy(buf, arr);
// 	//切割buf中的字符串
// 	//char* ret = strtok(arr, p);
// 	//printf("%s\n", ret);
// 	//ret = strtok(NULL, p);
// 	//printf("%s\n", ret);
// 	//ret = strtok(NULL, p);
// 	//printf("%s\n", ret);
// 	//ret = strtok(NULL, p);
// 	//printf("%s\n", ret);

// 	char* ret = NULL;
// 	// for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
// 	// {
// 	// 	printf("%s\n", ret);
// 	// }

//     for (ret = my_strtok(arr, p3); ret != NULL; ret = my_strtok(NULL, p3))
// 	{
// 		printf("%s\n", ret);
// 	}

//     // printf("%s\n", my_strtok(arr, p));
// 	return 0;
// }


//char * strerror ( int errnum );
/*
*  返回错误码，所对应的错误信息。
*
*  错误码  错误信息
*    0     No error
*    1     Operation not permitted
*    2     No such file or directory
*   ...
*   errno是一个全局的错误码的变量
*   当C语言的库函数在执行的过程中,发生了错误,就会把对应的错误码,赋值到errno中
*/
#include <errno.h>
//int main()
//{
//	char* str = strerror(1);
//	printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%d\n", errno);
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}



//字符分类函数、字符转换函数
#include <ctype.h>
//int main()
//{
//	char ch = 'w';
//	int ret = islower(ch);
//	printf("%d\n", ret);
//
//	ret = isdigit(ch);
//	printf("%d\n", ret);
//
//	char ch2 = tolower('Q');
//	putchar(ch2);
//	putchar('\n');
//
//	ch2 = toupper('q');
//	putchar(ch2);
//	putchar('\n');
//
//	char arr[] = "I AM A STUDENT";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
