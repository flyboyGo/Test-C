#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//�����Ķ�̬�ڴ����
// int main()
// {
//     //1����NULLָ��Ľ����ò���
//     int* p = (int*)malloc(40);
//     //��һmallocʧ����,p����ֵλNULL

//     int i = 0;
//     for( i = 0; i < 10; i++)
//     {
//         *(p + i) = i;
//     }
//     free(p);
//     p = NULL;

//     //2���Զ�̬���ٵ��ڴ��Խ�����
//     int* p2 =(int*)malloc(5 * sizeof(int));
//     if(p2 == NULL)
//     {
//         return 0;
//     }
//     else 
//     {
//         int i = 0;
//         for(i = 0; i < 10; i++)
//         {
//             *(p2 + i) = i;
//         }
//     }
//     free(p2);
//     p2 = NULL;


//     //3���ԷǶ�̬���ٵ��ڴ�ռ�ʹ��free�ͷ�
//     int a = 10;
//     int* p3 = &a;
//     *p3 = 20;
//     free(p3);
//     p3 = NULL;

//     //4��ʹ��free�ͷŶ�̬�����ڴ��һ����
//     int* p4 = (int*)malloc(40);
//     if(p4 == NULL)
//     {
//         return 0;
//     }
//     int j = 0;
//     for(j = 0; j < 10; j++)
//     {
//         *p4++ = j;
//     }
//     free(p4);
//     p4 = NULL;

//     //5����ͬһ�鶯̬�ڴ�Ķ���ͷ�
//     int* p5 = (int*)malloc(40);
//     if(p5 == NULL)
//     {
//         return 0;
//     }
//     //�ͷ�
//     free(p5);
//     p5 = NULL;
//     //...
//     free(p5);

//     //6����̬���ٵ��ڴ������ͷ�(�ڴ�й©)
//     while(1)
//     {
//         malloc(1);
//     }

//     //
//     return 0;
// }