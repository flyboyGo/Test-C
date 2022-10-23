#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void test01()
{

    //fgetc(文件指针) 对文件的字节读操作
    //文本文件：读到文件结尾返回EOF  #define EOF    (-1)
    //二进制文件：读到文件结尾，使用feof判断结尾

	FILE* fp;
	//1、使用fopen开发文件，返回一个文件指针
	fp = fopen("./text.txt", "rb");
	if (fp == NULL)
	{
		perror("文件不存在或文件目录错误!");
		return;
	}


	//定义临时变量，保存读取的字符
	char buf;
	//2、使用fgetc()字节读取文件 读取文件 fgetc()调用一次 读取一个字节
	while ((buf = fgetc(fp)) != EOF)
	{
		printf("%c", buf);
	}
	printf("\n");

	//3、关闭文件
	if (fp != NULL)
	{
		fclose(fp);
	}
}

void test02()
{
	//fputc(缓存变量,文件指针) 对文件进行写操作 调用一次fputc() 写入一个字节
	//如果输出成功 则返回输出的字节
	//如果输出失败 则返回一个EOF  #define EOF    (-1)

	FILE* fp;
	//打开文件
	fp = fopen("text2.txt","wt");
	if (fp == NULL)
	{
		perror("文件不存在或文件目录错误!");
		return;
	}

	//写文件
	char buf[128] = "";
	printf("请输入要写入文件的字符串:");
	fgets(buf,sizeof(buf),stdin); //会获取换行符
	buf[strlen(buf) - 1] = 0; //覆盖换行符

	//将字符串中的元素 逐个写入文件中
	int i = 0;
	while (buf[i] != '\0')
	{
		fputc(buf[i], fp);
		i++;
	}

	//关闭文件
	if (fp != NULL)
	{
		fclose(fp);
	}
}

//案例 将一个文件中的内容 复制到另一个文件中
void test03()
{
	FILE* fp_read = NULL;
	FILE* fp_write = NULL;
	
	//打开文件
	fp_read = fopen("text.txt", "rb");
	fp_write = fopen("text2.txt","ab");
	if (fp_read == NULL)
	{
		perror("文件不存在或文件目录错误!");
		return;
	}

	//读取、复制文件
	char buf;
	while ((buf = fgetc(fp_read)) != EOF)
	{
		fputc(buf, fp_write);
	}

	//关闭文件
	if (fp_read != NULL && fp_write != NULL)
	{
		fclose(fp_read);
		fclose(fp_write);
	}
}

//int main(void)
//{
//	test01();
//
//	test02();
//
//	test03();
//
//	return 0;
//}