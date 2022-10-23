#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void) 
{
	//定义文件指针
	FILE* fp = NULL;

	//打开文件
	// 绝对路径
	//fp = fopen("D:\\VisualStudioWorkPlace\\demo_10_14\\demo_10_14\\text.txt", "r");
	//相对路径 当前源文件所在目录

	//补充打开方式： b(二进制形式) t(文本文件形式,默认,可以省略)
	fp = fopen("text.txt", "a+t");

	if (fp == NULL)
	{
		perror("文件不存在或路径错误!");
	}

	char buf[1024]=" ";

	fgets(buf,sizeof(buf),fp);
	printf("%s\n",buf);

	//关闭文件
	if (fp != NULL)
	{
		fclose(fp);
	}

	return 0;
}