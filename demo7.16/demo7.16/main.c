#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//长度不受限制的字符串函数

//字符串长度
//size_t strlen ( const char * str );
/*
*  1、字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0'
      前面出现的字符个数（不包含 '\0' )。
   2、参数指向的字符串必须要以 '\0' 结束。
   3、注意函数的返回值为size_t，是无符号的（ 易错 ）
*/
// int main()
// {
// 	int len = strlen("abcdefg");
// 	printf("%d\n", len);

// 	char arr[] = { 'a','b','c','d','e','f','g' };
// 	printf("%d\n", strlen(arr));

// 	char arr2[] = {'abfg'}; //只保存最后一个字符g,无 \0字符,所以打印时会出现许多无用的字符
// 	printf("%s\n", arr2);
// 	return 0;
// }

/*
* size_t __cdecl strlen(
     _In_z_ char const* _Str
  );
  无符号整型返回值
  typedef unsigned int     size_t;
*/

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0) // 3  -  6  =  -3 ,-3的补码被当作无符号的数输出
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}



//字符串拷贝
//char* strcpy(char * destination, const char * source );
/*
* 源字符串必须以 '\0' 结束。
  会将源字符串中的 '\0' 拷贝到目标空间。
  目标空间必须足够大，以确保能存放源字符串。
  目标空间必须可变(可修改,不可以是常量字符串)。
*/

#include <assert.h>
char* my_strcpy(char* dest, const char* res)
{
    assert(dest != NULL);
    assert(res != NULL);
    char* ret = dest;
    while (*dest++ = *res++) //整个表达式的返回值,作为判断条件
    {
        ;
    }
    return ret;
}
//int main()
//{
//    char arr1[] = "abcdefg";
//    char arr2[] = "bit";
//    //strcpy(arr1, arr2);
//    my_strcpy(arr1, arr2);
//    printf("%s\n", arr1);
//    return 0;
//}


//字符串追加
//char * strcat ( char * destination, const char * source );
/*
*  源字符串必须以 '\0' 结束。
   目标空间必须有足够的大，能容纳下源字符串的内容。
   目标空间必须可修改。
   目标空间也必须以'\0'结束,因为strcat函数会从目标字符的第一个'\0'的位置开始追加
   使用strcat()函数,实现字符串自身追加时,会出现问题,因该使用strncat()函数
*/

char* my_strcat(char* dest, const char* src)
{
    char* ret = dest;
    assert(dest != NULL);
    assert(src != NULL);

    while (dest != '\0')
    {
        dest++;
    }

    while (*dest++ = *src++)
    {
        ;
    }
    return ret;
}
//int main()
//{
//    char arr1[20] = "hello";
//    char arr2[] = "world";
//    strcat(arr1, arr2);
//    printf("%s\n", arr1);
//    return 0;
//}



//比较字符串大小关系(比较的时ASCALL码的值)
//int strcmp ( const char * str1, const char * str2 );
/*
*  第一个字符串大于第二个字符串，则返回大于0的数字
   第一个字符串等于第二个字符串，则返回0
   第一个字符串小于第二个字符串，则返回小于0的数字
*/

int my_strcmp(const char* str1, const char* str2)
{
    assert(str1 && str2);
    while (*str1 == *str2)
    {
        if (*str1 == '\0')
        {
            return 0;//相等
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;//大于或小于
}

//int main()
//{
//    char* p1 = "abcdef";
//    char* p2 = "abcdef";
//    int ret = strcmp(p1, p2);
//    printf("%d\n", ret);
//    int ret2 = my_strcmp(p1, p2);
//    printf("%d\n", ret2);
//    return 0;
//}



//长度受限制的字符串函数介绍

//字符串拷贝
//char * strncpy ( char * destination, const char * source, size_t num );
/*
*  拷贝num个字符从源字符串到目标空间。
*  如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个。
*  如果目标空间小于拷贝的空间大小,则报错
*/


char* my_strncpy(char* dest, const char* res, int count)
{
    assert(dest);
    assert(res);
    char* start = dest;
    while ((count != 0) && (*dest++ = *res++))
        count--;
    if (count != 0)
        while (--count)
            *dest++ = '\0';
    return start;
}


//int main()
//{
//    char arr1[] = "abcdefg";
//    char arr2[] = "bit";
//    char arr3[] = "hello,world";
//    strncpy(arr1, arr2, 3);
//    //strncpy(arr1, arr3, 11);
//    strncpy(arr1, arr2, 5);
//
//    my_strncpy(arr3, arr1, 7);
//    printf("%s\n", arr3);
//    return 0;
//}


//追加字符串
//char * strncat ( char * destination, const char * source, size_t num );
/*
*  如果源字符串的长度小于num，则拷贝完源字符串之后，末尾添加一个'\0'即可,不够也不追加其他字符
*/

char* my_strncat(char* dest, const char* res, size_t count)
{
    assert(dest);
    assert(res);
    char* tmp = dest;

    while (*dest++)
    {
        ;
    }
    dest--;

    while ((*dest++ = *res++) && count--)
    {
        ;
    }

    return tmp;

}

// int main()
// {
//    char arr1[30] = "hello\0xxxxx";
//    char arr2[] = "world";
//    //strncat(arr1, arr2, 3);
//    //strncat(arr1, arr2, 8);//源字符不够,也不追加其他字符
//    //printf("%s\n", arr1);
//    my_strncat(arr1, arr2, 5);
//    printf("%s\n", arr1);
//    return 0;
// }



