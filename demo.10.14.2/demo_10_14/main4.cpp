#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test06()
{
	//fwrite(buffer,size,count,fp) 将数据块写入到文件中
	/*
	* 参数：
	*  buffer:指向存储数据空间的首地址指针
	*  size: 一次读写的数据块的大小
	*  count:要读写的数据块的个数
	*  fp: 指向要进行写操作的文件指针
	*  返回值：
	*  成功：实际写入的次数(不是数据的总大小，重要!!!!!)
	*  失败：0
	* 
	*  重点：fwrite() 将内存中的数据原样的 输出到文件中
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
		{"德玛",80,60},
		{"皇子",60,70},
		{"蝎子",65,50},
		{"蒙多",95,75}
	};

	FILE* fp = NULL;
	//打开文件
	fp = fopen("text3.txt", "wb");
	if (fp == NULL)
	{
		perror("文件不存在或文件目录错误!");
		return;
	}

	//fwrite() 将内存中的数据原样的 输出到文件中
	//fwrite写入到文件中的数据 不便于查看 但不会影响 程序读操作
	//fwrite是一次性写入
	fwrite(hero,sizeof(HERO),sizeof(hero)/sizeof(hero[0]),fp);

	//关闭文件
	if (fp != NULL)
	{
		fclose(fp);
	}
}

void test08()
{
	/*
	*  fread(buffer,size,count,fp) 读操作
	*  参数：
	*  buffer:指向存储数据空间的首地址指针
	*  size: 一次读写的数据块的大小
	*  count:要读写的数据块的个数
	*  fp: 指向要进行写操作的文件指针
	* 
	*  返回值：
	*  成功：实际读取的次数(不是数据的总大小，重要!!!!!)
	*  失败：0
	*  如果文件读取完毕，返回0
	*/

	FILE* fp;
	//打开文件
	fp = fopen("text3.txt","rb");
	if (fp == NULL)
	{
		perror("文件不存在或文件目录错误!");
		return;
	}

	//读文件
	HERO hero[4];
	//fread()是一次性读取
	fread(hero, sizeof(HERO), sizeof(hero) / sizeof(hero[0]), fp);

	for (int i = 0; i < 4; i++)
	{
		printf("英雄：%s, 防御：%d, 攻击：%d\n",hero[i].name,(hero +i)->deff,(hero+i)->atck);
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