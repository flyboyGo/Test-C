#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test()
{
	//�����ļ�ָ��
	FILE* fp = NULL;

	//���ļ�
	// ����·��
	//fp = fopen("D:\\VisualStudioWorkPlace\\demo_10_14\\demo_10_14\\text.txt", "r");
	//���·�� ��ǰԴ�ļ�����Ŀ¼

	//����򿪷�ʽ�� b(��������ʽ) t(�ı��ļ���ʽ,Ĭ��,����ʡ��)
	fp = fopen("text.txt", "a+t");

	if (fp == NULL)
	{
		perror("�ļ������ڻ�·������!");
		return;
	}

	//�ر��ļ�
	if (fp != NULL)
	{
		fclose(fp);
	}
}

//int main(void) 
//{
//	test();
//
//	return 0;
//}