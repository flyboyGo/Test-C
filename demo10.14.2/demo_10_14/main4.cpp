#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test06()
{
	//fwrite(buffer,size,count,fp) �����ݿ�д�뵽�ļ���
	/*
	* ������
	*  buffer:ָ��洢���ݿռ���׵�ַָ��
	*  size: һ�ζ�д�����ݿ�Ĵ�С
	*  count:Ҫ��д�����ݿ�ĸ���
	*  fp: ָ��Ҫ����д�������ļ�ָ��
	*  ����ֵ��
	*  �ɹ���ʵ��д��Ĵ���(�������ݵ��ܴ�С����Ҫ!!!!!)
	*  ʧ�ܣ�0
	* 
	*  �ص㣺fwrite() ���ڴ��е�����ԭ���� ������ļ���
	*/
}

typedef struct
{
	char name[16];
	int deff;
	int atck;
}HERO;

void test07()
{
	HERO hero[] =
	{
		{"����",80,60},
		{"����",60,70},
		{"Ы��",65,50},
		{"�ɶ�",95,75}
	};

	FILE* fp = NULL;
	//���ļ�
	fp = fopen("text3.txt", "wb");
	if (fp == NULL)
	{
		perror("�ļ������ڻ��ļ�Ŀ¼����!");
		return;
	}

	//fwrite() ���ڴ��е�����ԭ���� ������ļ���
	//fwriteд�뵽�ļ��е����� �����ڲ鿴 ������Ӱ�� ���������
	//fwrite��һ����д��
	fwrite(hero,sizeof(HERO),sizeof(hero)/sizeof(hero[0]),fp);

	//�ر��ļ�
	if (fp != NULL)
	{
		fclose(fp);
	}
}

void test08()
{
	/*
	*  fread(buffer,size,count,fp) ������
	*  ������
	*  buffer:ָ��洢���ݿռ���׵�ַָ��
	*  size: һ�ζ�д�����ݿ�Ĵ�С
	*  count:Ҫ��д�����ݿ�ĸ���
	*  fp: ָ��Ҫ����д�������ļ�ָ��
	* 
	*  ����ֵ��
	*  �ɹ���ʵ�ʶ�ȡ�Ĵ���(�������ݵ��ܴ�С����Ҫ!!!!!)
	*  ʧ�ܣ�0
	*  ����ļ���ȡ��ϣ�����0
	*/

	FILE* fp;
	//���ļ�
	fp = fopen("text3.txt","rb");
	if (fp == NULL)
	{
		perror("�ļ������ڻ��ļ�Ŀ¼����!");
		return;
	}

	//���ļ�
	HERO hero[4];
	//fread()��һ���Զ�ȡ
	fread(hero, sizeof(HERO), sizeof(hero) / sizeof(hero[0]), fp);

	for (int i = 0; i < 4; i++)
	{
		printf("Ӣ�ۣ�%s, ������%d, ������%d\n",hero[i].name,(hero +i)->deff,(hero+i)->atck);
	}


	if (fp != NULL)
	{
		fclose(fp);
	}
	
}

//int main(void)
//{
//	test06();
//
//	test07();
//
//	test08();
//
//	return 0;
//}