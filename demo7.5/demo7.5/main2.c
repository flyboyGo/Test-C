#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a; //��ʼ��ָ�����
//	int* p = NULL; //NULL-> ������ʼ��ָ���,��ָ�븳ֵ��  #define NULL ((void *)0)
//	int b = 10;
//	int* pb = &b;
//	*pb = 20;
//	pb = NULL; //pbָ��Ŀռ����ͷ�,�����������ָ��,��ָ�븳ֵNULL
//	*pb = 10; //0x00031000 ��(λ�� demo7.5.exe ��)�������쳣: 
//	          //0xC0000005: д��λ�� 0x00000000 ʱ�������ʳ�ͻ��
//	//��Ϊpbָ��ָ��Ŀռ��Ѿ��ͷ�,����ٴ�ʹ�ûᷢ���쳣
//	if (pb != NULL) //ʹ��ǰ���ж�ָ���Ƿ�Ϊ��
//	{
//		//��������
//	}
//	return 0;
//}