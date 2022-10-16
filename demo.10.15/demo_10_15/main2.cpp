#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>

void test03()
{
	//void rewind(文件指针) 把文件内部的位置指针移动到文件首地址
	//long ftell(文件指针) 取得文件流目前的读写位置 返回当前位置(距离文件起始的字节数),失败 返回-1

	FILE* fp;
	//打开文件
	fp = fopen("text2.txt", "w+t");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}

	//写文件
	fputs("hello,world",fp);

	//获取 文件流指针的 偏移量
	printf("文件指针偏移量 = %d\n",ftell(fp));

	//读文件
	//将文件指针回溯到文件首地址
	rewind(fp);
	char buf[128] = "";
	fgets(buf, sizeof(buf), fp);
	printf("%s\n",buf);

	//关闭文件
	if (fp != NULL)
	{
		fclose(fp);
	}
}

void test04()
{
	//int fseek(文件指针，位移量，起始点) (一般用于二进制文件) 移动文件流的读写位置
	/*
	* 说明：
	* 文件开头                SEEK_SET   0
	* 文件当前位置            SEEK_CUR   1
	* 文件结尾                SEEK_END   2
	* 位移量:已起始点为基点，向前、向后移动的字节数
	*/

	FILE* fp;
	//打开文件
	fp = fopen("text2.txt", "rt");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}

	//需求：一次性将文件数据读取到文件内存中
	//1、得到文件的总大小
	int file_length = 0;
	//使用fseek 将文件指针 定位到文件尾部
	fseek(fp, 0, SEEK_END);
	//使用ftell 获取文件指针的偏移量 == 文件的总大小
	file_length = ftell(fp);
	//使用rewind 复位文件流指针
	rewind(fp);
	 
	//2、根据文件的大小 合理申请 内存空间
	printf("file_length = %d\n",file_length);
	char* file_data = (char*)calloc(1, file_length + 1); // +1的目的 内存末尾存放 '\0'
	if (file_data == NULL)
	{
		fclose(fp);
		return;
	}
	 
	//3、一次性 将文件数据 读入到 内存空间
	fread(file_data, file_length, 1, fp);

	//从 stream 所指的文件中读取字符，在读取的时候碰到换行符或者是碰到文件的末尾停止读取，
	//或者是读取了 size - 1 个字节停止读取，在读取的内容后面会加一个\0, 作为字符串的结尾
	//fgets(file_data, file_length + 1, fp);

	//4、遍历读取到的文件内容
	printf("%s\n", file_data);

	//关闭文件
	if (fp != NULL)
	{
		fclose(fp);
	}
	
	//释放内存
	if (file_data != NULL)
	{
		free(file_data);
	}
}

//int main(void)
//{
//	test03();
//
//	test04();
//
//	return 0;
//}