#include "fun.h"

void print_help(void)
{
	printf("*************1、加密文件***********\n");
	printf("*************2、解密文件***********\n");
	printf("*************3、退出程序***********\n");
}

void get_file_name(char* dest_file_name, char* src_file_name)
{
	printf("请输入你的源文件名称(30个字符):");
	scanf("%s", src_file_name);
	printf("请输入你的目的文件名称(30个字符):");
	scanf("%s", dest_file_name);
}

char* read_src_file(unsigned long * file_length, char* src_file_name)
{
	char* data = NULL;
	FILE* fp = NULL;
	fp = fopen(src_file_name,"rt");
	if (fp == NULL)
	{
		perror("fopen");
		return NULL;
	}

	//获取文件长度
	//移动文件流指针
	fseek(fp, 0, SEEK_END);
	//获取文件流指针的位置
	*file_length = ftell(fp);
	//复位文件流指针
	rewind(fp);

	//根据文件的长度申请堆区空间
	data = (char*)calloc(1, *file_length);
	if (data == NULL)
	{
		perror("calloc failture");
		return NULL;
	}

	//一次读取文件内容
	fread(data, *file_length, 1, fp);

	//将空间首地址返回
	return data;

	//关闭文件
	if (fp != NULL)
	{
		fclose(fp);
	}
}

char* file_text_encrypt(char* src_file_text, unsigned long  length, unsigned int password)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		src_file_text[i] += password; //加密过程
	}

	return src_file_text;
}

char* file_text_decrypt(char* src_file_text, unsigned long  length, unsigned int password)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		src_file_text[i] -= password; //加密过程
	}

	return src_file_text;
}

void save_file(char* text, unsigned long length, char* file_name)
{
	FILE* fp = NULL;
	fp = fopen(file_name, "wt");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}

	//将加密完成的文件内容保存到 指定文件中
	fwrite(text, length, 1, fp);

	fclose(fp);

	//释放text指向的堆区空间
	if (text != NULL)
	{
		free(text);
	}

	printf("保存成功!\n");
}


