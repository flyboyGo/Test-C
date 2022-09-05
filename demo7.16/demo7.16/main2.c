#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//�ַ����Ƚ�
//int strncmp ( const char * str1, const char * str2, size_t num );
/*
* �Ƚϵ���������ַ���һ������һ���ַ�����������num���ַ�ȫ���Ƚ���
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


//�����ַ���
//char * strstr ( const char *str1, const char * str2);
/*
* Returns a pointer to the first occurrence of str2 in str1,
   or a null pointer if str2 is not part ofstr1.
*/
/*
* NULL--��ָ��
* NUL/Null -- '\0'
*/
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	//�������
	if ((strlen(str2) == 0) || (strlen(str2) > strlen(str1)))
	{
		return NULL;
	}
	//�������
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
			return str1 + i; //�ҵ���
		}
	}
	return NULL; //�Ҳ���
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
			return cur;//�ҵ���
		}
		if (*s1 == '\0')
		{
			return NULL;
		}
		cur++;
	}
	return NULL; //�Ҳ����ִ�
}


//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "defg";
//	//char* ret = strstr(p1, p2);
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("�ִ�������\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}


//�ָ��ַ���
//char * strtok ( char * str, const char * sep );
/*
*  1��sep�����Ǹ��ַ����������������ָ������ַ�����
   2����һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
	  strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣��ע��
   3��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ����������
	  ���ҿ��޸ġ���
   4��strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ���
	  �е�λ�á�
   5��strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����
	  �ǡ�
   6������ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣
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
// 	//�и�buf�е��ַ���
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
*  ���ش����룬����Ӧ�Ĵ�����Ϣ��
*
*  ������  ������Ϣ
*    0     No error
*    1     Operation not permitted
*    2     No such file or directory
*   ...
*   errno��һ��ȫ�ֵĴ�����ı���
*   ��C���ԵĿ⺯����ִ�еĹ�����,�����˴���,�ͻ�Ѷ�Ӧ�Ĵ�����,��ֵ��errno��
*/
#include <errno.h>
//int main()
//{
//	char* str = strerror(1);
//	printf("%s\n", str);
//
//	//���ļ�
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



//�ַ����ຯ�����ַ�ת������
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
