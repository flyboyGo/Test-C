#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void) 
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
	}

	char buf[1024]=" ";

	fgets(buf,sizeof(buf),fp);
	printf("%s\n",buf);

	//�ر��ļ�
	if (fp != NULL)
	{
		fclose(fp);
	}

	return 0;
}