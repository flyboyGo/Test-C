#include "fun.h"

void print_help(void)
{
	printf("*************1�������ļ�***********\n");
	printf("*************2�������ļ�***********\n");
	printf("*************3���˳�����***********\n");
}

void get_file_name(char* dest_file_name, char* src_file_name)
{
	printf("���������Դ�ļ�����(30���ַ�):");
	scanf("%s", src_file_name);
	printf("���������Ŀ���ļ�����(30���ַ�):");
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

	//��ȡ�ļ�����
	//�ƶ��ļ���ָ��
	fseek(fp, 0, SEEK_END);
	//��ȡ�ļ���ָ���λ��
	*file_length = ftell(fp);
	//��λ�ļ���ָ��
	rewind(fp);

	//�����ļ��ĳ�����������ռ�
	data = (char*)calloc(1, *file_length);
	if (data == NULL)
	{
		perror("calloc failture");
		return NULL;
	}

	//һ�ζ�ȡ�ļ�����
	fread(data, *file_length, 1, fp);

	//���ռ��׵�ַ����
	return data;

	//�ر��ļ�
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
		src_file_text[i] += password; //���ܹ���
	}

	return src_file_text;
}

char* file_text_decrypt(char* src_file_text, unsigned long  length, unsigned int password)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		src_file_text[i] -= password; //���ܹ���
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

	//��������ɵ��ļ����ݱ��浽 ָ���ļ���
	fwrite(text, length, 1, fp);

	fclose(fp);

	//�ͷ�textָ��Ķ����ռ�
	if (text != NULL)
	{
		free(text);
	}

	printf("����ɹ�!\n");
}


