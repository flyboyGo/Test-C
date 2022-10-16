#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test05()
{
	//文件结束检测函数feof(文件指针) 文本文件、二进制文件都适用   (EOF宏标识(实质为 -1)只适用于文本文件)
	/*
	* 功能函数
	* 1、判断文件是否处于文件结束位置
	* 2、常配合fgetc、fgets、fread等读函数判断是否到文件结束
	* 
	* 返回值：文件未结束返回0  文件已结束返回非0
	*/


	FILE* fp;
	//打开文件
	fp = fopen("text2.txt", "rt");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}

	//读文件
	while (!feof(fp))
	{
		char ch = fgetc(fp);
		printf("%c",ch);
	}

	//关闭文件
	if (fp != NULL)
	{
		fclose(fp);
	}
}

void test06()
{
	/*
	* 读写文件出错检测函数ferror
	       调用格式:ferror(文件指针);

	  功能:
          检查文件在用各种输入输出函数进行读写时是否出错
      比如:以只读方式打开一个文件，调用写函数就会发生错误，只要出现错误标志，就一直保留，
	  直到对同一文件调用  clearerr函数 或 rewind函数,  或任何其他一个输入输出函数。

      返回值:
           为0表示未出错，否则表示有错

	*/

	/*
	* 文件出错标志和文件结束标志置0函数clearerr
	      调用格式:clearerr(文件指针);
      功能:
          本函数用于清除出错标志和文件结束标志,使它们为0值

       无返回值.

	*/
}
int main(void)
{
	test05();

	return 0;
}