#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//��������
// ��һ�ŷ�ʽ
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//
//#if 1
//		printf("%d ", arr[i]);
//#endif
//
//	}
//	return 0;
//}
    

//�ڶ��ַ�ʽ
//int main()
//{
//
//#if 1==3
//	printf("haha\n");
//#elif 2==3
//	printf("hehe\n");
//#else 
//	printf("���!\n");
//#endif
//
//	return 0;
//}


//�����ַ�ʽ
#define DEBUG 

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//
////#if defined (DEBUG)
////		printf("%d ", arr[i]);
////#endif
//
////#ifdef DEBUG
////		printf("%d ", arr[i]);
////#endif
//
//
////������
////#if !defined(DEBUG)
////		printf("%d ", arr[i]);
////#endif
//
//#ifndef DEBUG
//		printf("%d ", arr[i]);
//#endif
//
//	}
//
//	return 0;
//}



//Ƕ��ָ��
//int main()
//{
//#if defined(DEBUG)
//    #if 1==2
//        printf("haha\n");
//    #endif
//
//    #ifdef DEBUG
//        printf("hello\n");
//    #endif 
//
//#elif !defined(DEBUG)
//    #if 0
//        printf("hehe\n");
//    #elif 0
//        printf("yes\n");
//    #else
//        printf("no\n");
//    #endif 
//
//#endif
//
//    return 0;
//}



//�ļ�����
//����Ĭ����extern�ģ������Ļ�����Ҫ�ֶ�extern��
//C��׼���壬����Ĭ����ȫ�ֵģ�����Ĭ���Ǿֲ��ġ�
//�����㶨��ĺ����������ļ�Ҳ���Ե��á�������ı����������ļ�����Ҫextern������ʹ��


//""˫���ŵĲ��Ҳ���
//���Ҳ��ԣ�����Դ�ļ�����Ŀ¼�²��ң������ͷ�ļ�δ�ҵ���������������ҿ⺯��ͷ�ļ�һ���ڱ�
//׼λ�ò���ͷ�ļ���
//����Ҳ�������ʾ�������

//<>�Ĳ��Ҳ���
//����ͷ�ļ�ֱ��ȥ��׼·����ȥ���ң�����Ҳ�������ʾ�������

//��������˵�����ڿ��ļ�Ҳ����ʹ�� "" ����ʽ����


#include "add.h"

//int main()
//{
//    int ret = add(1, 2);
//    printf("%d\n", ret);
//
//    return 0;
//}
