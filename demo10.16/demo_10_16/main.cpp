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
			//1����ȡԴ�ļ���Ŀ���ļ���
			get_file_name(dest_file, src_file);

			//2����ȡԴ�ļ� ��Ӧ���ļ�����
			file_data = read_src_file(&file_length, src_file);

			//3����ȡ�û��������Կ
			printf("please input unsigned int password��");
			scanf("%d", &password);

			//4�����ļ����� ����
			file_text_encrypt(file_data, file_length, password);

			//5����������ɵ��ļ����� ���浽 Ŀ���ļ��ļ���
			save_file(file_data, file_length, dest_file);
			break;
		case 2:
			//1����ȡԴ�ļ���Ŀ���ļ���
			get_file_name(dest_file, src_file);

			//2����ȡԴ�ļ� ��Ӧ���ļ�����
			file_data = read_src_file(&file_length, src_file);

			//3����ȡ�û��������Կ
			printf("please input unsigned int password��");
			scanf("%d", &password);
			
			//4�����ļ����� ����
			file_text_decrypt(file_data, file_length, password);

			//5����������ɵ��ļ����� ���浽 Ŀ���ļ��ļ���
			save_file(file_data, file_length, dest_file);
			break;
		case 3:
			return;
			break;
		default:
			printf("�������,����������!\n");
			break;
		}
	}
}

int main(void)
{
	test();

	return 0;
}