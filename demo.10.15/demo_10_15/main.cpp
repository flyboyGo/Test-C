#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

typedef struct
{
	char name[16];
	int deff;
	int atck;
}HERO;

void test01()
{
	HERO hero[] =
	{
		{"����",80,60},
		{"����",60,70},
		{"Ы��",65,50},
		{"�ɶ�",95,75}
	};
	int n = sizeof(hero) / sizeof(hero[0]);

	FILE* fp = NULL;
	//���ļ�
	fp = fopen("text.txt","wb");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}

	//д�ļ�
	//fprintf(�ļ�ָ��,��ʽ���ַ���,����б�)  ��ʽ��д�ļ�
	for (int i = 0; i < n; i++)
	{
		fprintf(fp, "Ӣ��:%s ����:%d ����:%d\n", hero[i].name, hero[i].deff, hero[i].atck);
	}


	//�ر��ļ�
	if (fp != NULL)
	{
		fclose(fp);
	}
}

void test02()
{
	HERO hero[4];
	int n = sizeof(hero) / sizeof(hero[0]);

	FILE* fp = NULL;
	//���ļ�
	fp = fopen("text.txt","rb");
	if (fp == NULL)
	{
		perror("fopen");
	}

	//���ļ�
	for (int i = 0; i < n; i++)
	{
		fscanf(fp, "Ӣ��:%s ����:%d ����:%d\n", hero[i].name, &hero[i].deff, &hero[i].atck);
	}

	for (int i = 0; i < n; i++)
	{
		printf("Ӣ��:%s ����:%d ����:%d\n", hero[i].name, hero[i].deff, hero[i].atck);
	}

	//�ر��ļ�
	if (fp != NULL)
	{
		fclose(fp);
	}
}

//int main(void)
//{
//
//	test01();
//
//	test02();
//
//	return 0;
//}