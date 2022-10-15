#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test04()
{
	//fputs(字符串,文件指针) 向指针文件中写入一个字符串
	/*
	* 说明:
	* 1、第一个字符串可以是字符串常量、字符串数组名、字符指针
	* 2、字符串末尾的 '\0' 不会写入到文件中
	* 
	* 成功  返回写入的字节数
    * 失败  返回 -1
	*/

	FILE* fp = NULL;
	//打开文件
	fp = fopen("text.txt","wb");
	if (fp == NULL)
	{
		perror("文件不存在或文件目录错误!");
		return;
	}

	//写入文件
	//char buf[] = {"举头望明月，\n低头思故乡。"};
	//fputs(buf, fp);

	//指针数组
	const char* buf_plus[] = {"床前明月光\n","疑是地上霜"};
	int n = sizeof(buf_plus) / sizeof(buf_plus[0]);
	for (int i = 0; i < n; i++)
	{
		fputs(buf_plus[i], fp);
	}

	//关闭文件
	if (fp != NULL)
	{
		fclose(fp);
	}

}

void test05()
{
	//fgets(存放数据的的首地址,n,文件指针) //从指定的文件中读取字符串 
	/*说明
	* 从fp指向的文件中读取 n-1 个字符 在读入 n-1 个字符之前遇到换行符或EOF，读入结束，
	* 并读取换行符，在最后加上一个 ‘\0' str为存放数据的首地址
	* 
	* 读取成功 返回字符串首元素地址
	* 读取失败 返回NULL
	* 
	* 常用于获取文件一行的数据
	*/

	FILE* fp = NULL;

	//打开文件
	const char* path = "text.txt";
	fp = fopen(path,"rb");
	if (fp == NULL)
	{
		perror("文件不存在或文件目录错误!");
		return;
	}

	//读取文件
	char buf[128] = "";
	while ((fgets(buf, sizeof(buf), fp)) != NULL)
	{
		printf("%s", buf);
	}

	//关闭文件
	if (fp != NULL)
	{
		fclose(fp);
	}
}

//int main(void)
//{
//	test04();
//
//	test05();
//
//	return 0;
//}