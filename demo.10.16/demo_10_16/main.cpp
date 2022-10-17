#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "fun.h"

void test()
{
	int select = 0;
	
	while (1)
	{
		print_help();
		scanf("%d", &select);
		char src_file[31] = "";
		char dest_file[31] = "";
		unsigned long file_length = 0;
		unsigned int password = 0;
		char* file_data = NULL;
		switch (select)
		{
		case 1:
			//1、获取源文件、目标文件名
			get_file_name(dest_file, src_file);

			//2、获取源文件 对应的文件内容
			file_data = read_src_file(&file_length, src_file);

			//3、获取用户输入的密钥
			printf("please input unsigned int password：");
			scanf("%d", &password);

			//4、对文件内容 加密
			file_text_encrypt(file_data, file_length, password);

			//5、将加密完成的文件内容 保存到 目标文件文件中
			save_file(file_data, file_length, dest_file);
			break;
		case 2:
			//1、获取源文件、目标文件名
			get_file_name(dest_file, src_file);

			//2、获取源文件 对应的文件内容
			file_data = read_src_file(&file_length, src_file);

			//3、获取用户输入的密钥
			printf("please input unsigned int password：");
			scanf("%d", &password);
			
			//4、对文件内容 解密
			file_text_decrypt(file_data, file_length, password);

			//5、将解密完成的文件内容 保存到 目标文件文件中
			save_file(file_data, file_length, dest_file);
			break;
		case 3:
			return;
			break;
		default:
			printf("输入错误,请重新输入!\n");
			break;
		}
	}
}

int main(void)
{
	test();

	return 0;
}