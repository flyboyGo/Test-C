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
		{"德玛",80,60},
		{"皇子",60,70},
		{"蝎子",65,50},
		{"蒙多",95,75}
	};
	int n = sizeof(hero) / sizeof(hero[0]);

	FILE* fp = NULL;
	//打开文件
	fp = fopen("text.txt","wb");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}

	//写文件
	//fprintf(文件指针,格式化字符串,输出列表)  格式化写文件
	for (int i = 0; i < n; i++)
	{
		fprintf(fp, "英雄:%s 防御:%d 攻击:%d\n", hero[i].name, hero[i].deff, hero[i].atck);
	}


	//关闭文件
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
	//打开文件
	fp = fopen("text.txt","rb");
	if (fp == NULL)
	{
		perror("fopen");
	}

	//读文件
	for (int i = 0; i < n; i++)
	{
		fscanf(fp, "英雄:%s 防御:%d 攻击:%d\n", hero[i].name, &hero[i].deff, &hero[i].atck);
	}

	for (int i = 0; i < n; i++)
	{
		printf("英雄:%s 防御:%d 攻击:%d\n", hero[i].name, hero[i].deff, hero[i].atck);
	}

	//关闭文件
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