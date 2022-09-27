#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

//������Ŀ
// void GetMemory(char *p)
// {
//      p = (char *)malloc(100);
// }
// void Test(void)
// {
//      char *str = NULL;
//      GetMemory(str);
//      strcpy(str, "hello world");
//      printf(str);
// }

//������ʽһ
// void GetMemory(char **p)
// {
//      *p = (char *)malloc(100);
// }
// void Test(void)
// {
//      char *str = NULL;
//      GetMemory(&str);
//      strcpy(str, "hello world");
//      printf("%s\n", str);
//      free(str);
//      str = NULL;
// }

//������ʽ��
char* GetMemory(char* p)
{
    p = (char*)malloc(100);
    return p;
}
void Test(void)
{
    char* str = NULL;
    str = GetMemory(str);
    strcpy(str, "hello world");
    printf("%s\n", str);
    free(str);
    str = NULL;
}

/*
   1�����д���������ֱ���������
   2����������ڴ�й¶������
   str��ֵ���ݵ���ʽ������
   p��GetMemory�������β�,ֻ�ܺ����ڲ���Ч
   ��GetMemory���������Ժ�,��̬�����ڴ���δ�ͷŲ����޷��ҵ�,���Ի�����ڴ�й©
*/
// int main()
// {
//     Test();
//     return 0;
// }


//����ջ�ռ��ַ������
char* GetMemory2(void)
{
    char p[] = "hello world";
    return p;
}
void Test2(void)
{
    char* str = NULL;
    str = GetMemory2();
    printf("%s\n", str);
}

// int main()
// {
//      Test2();
//      return 0;
// }


void Test3(void)
{
    char* str = (char*)malloc(100);
    strcpy(str, "hello");
    free(str);
    if (str != NULL)
    {
        strcpy(str, "world");
        printf("%s\n", str);
    }
}
//int main()
//{
//    Test3();
//    return 0;
//}


