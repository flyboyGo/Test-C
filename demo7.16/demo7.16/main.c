#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//���Ȳ������Ƶ��ַ�������

//�ַ�������
//size_t strlen ( const char * str );
/*
*  1���ַ����Ѿ� '\0' ��Ϊ������־��strlen�������ص������ַ����� '\0'
      ǰ����ֵ��ַ������������� '\0' )��
   2������ָ����ַ�������Ҫ�� '\0' ������
   3��ע�⺯���ķ���ֵΪsize_t�����޷��ŵģ� �״� ��
*/
// int main()
// {
// 	int len = strlen("abcdefg");
// 	printf("%d\n", len);

// 	char arr[] = { 'a','b','c','d','e','f','g' };
// 	printf("%d\n", strlen(arr));

// 	char arr2[] = {'abfg'}; //ֻ�������һ���ַ�g,�� \0�ַ�,���Դ�ӡʱ�����������õ��ַ�
// 	printf("%s\n", arr2);
// 	return 0;
// }

/*
* size_t __cdecl strlen(
     _In_z_ char const* _Str
  );
  �޷������ͷ���ֵ
  typedef unsigned int     size_t;
*/

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0) // 3  -  6  =  -3 ,-3�Ĳ��뱻�����޷��ŵ������
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}



//�ַ�������
//char* strcpy(char * destination, const char * source );
/*
* Դ�ַ��������� '\0' ������
  �ὫԴ�ַ����е� '\0' ������Ŀ��ռ䡣
  Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
  Ŀ��ռ����ɱ�(���޸�,�������ǳ����ַ���)��
*/

#include <assert.h>
char* my_strcpy(char* dest, const char* res)
{
    assert(dest != NULL);
    assert(res != NULL);
    char* ret = dest;
    while (*dest++ = *res++) //�������ʽ�ķ���ֵ,��Ϊ�ж�����
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


//�ַ���׷��
//char * strcat ( char * destination, const char * source );
/*
*  Դ�ַ��������� '\0' ������
   Ŀ��ռ�������㹻�Ĵ���������Դ�ַ��������ݡ�
   Ŀ��ռ������޸ġ�
   Ŀ��ռ�Ҳ������'\0'����,��Ϊstrcat�������Ŀ���ַ��ĵ�һ��'\0'��λ�ÿ�ʼ׷��
   ʹ��strcat()����,ʵ���ַ�������׷��ʱ,���������,���ʹ��strncat()����
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



//�Ƚ��ַ�����С��ϵ(�Ƚϵ�ʱASCALL���ֵ)
//int strcmp ( const char * str1, const char * str2 );
/*
*  ��һ���ַ������ڵڶ����ַ������򷵻ش���0������
   ��һ���ַ������ڵڶ����ַ������򷵻�0
   ��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
*/

int my_strcmp(const char* str1, const char* str2)
{
    assert(str1 && str2);
    while (*str1 == *str2)
    {
        if (*str1 == '\0')
        {
            return 0;//���
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;//���ڻ�С��
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



//���������Ƶ��ַ�����������

//�ַ�������
//char * strncpy ( char * destination, const char * source, size_t num );
/*
*  ����num���ַ���Դ�ַ�����Ŀ��ռ䡣
*  ���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num����
*  ���Ŀ��ռ�С�ڿ����Ŀռ��С,�򱨴�
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


//׷���ַ���
//char * strncat ( char * destination, const char * source, size_t num );
/*
*  ���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮��ĩβ���һ��'\0'����,����Ҳ��׷�������ַ�
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
//    //strncat(arr1, arr2, 8);//Դ�ַ�����,Ҳ��׷�������ַ�
//    //printf("%s\n", arr1);
//    my_strncat(arr1, arr2, 5);
//    printf("%s\n", arr1);
//    return 0;
// }



