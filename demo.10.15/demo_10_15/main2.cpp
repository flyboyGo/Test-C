#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>

void test03()
{
	//void rewind(�ļ�ָ��) ���ļ��ڲ���λ��ָ���ƶ����ļ��׵�ַ
	//long ftell(�ļ�ָ��) ȡ���ļ���Ŀǰ�Ķ�дλ�� ���ص�ǰλ��(�����ļ���ʼ���ֽ���),ʧ�� ����-1

	FILE* fp;
	//���ļ�
	fp = fopen("text2.txt", "w+t");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}

	//д�ļ�
	fputs("hello,world",fp);

	//��ȡ �ļ���ָ��� ƫ����
	printf("�ļ�ָ��ƫ���� = %d\n",ftell(fp));

	//���ļ�
	//���ļ�ָ����ݵ��ļ��׵�ַ
	rewind(fp);
	char buf[128] = "";
	fgets(buf, sizeof(buf), fp);
	printf("%s\n",buf);

	//�ر��ļ�
	if (fp != NULL)
	{
		fclose(fp);
	}
}

void test04()
{
	//int fseek(�ļ�ָ�룬λ��������ʼ��) (һ�����ڶ������ļ�) �ƶ��ļ����Ķ�дλ��
	/*
	* ˵����
	* �ļ���ͷ                SEEK_SET   0
	* �ļ���ǰλ��            SEEK_CUR   1
	* �ļ���β                SEEK_END   2
	* λ����:����ʼ��Ϊ���㣬��ǰ������ƶ����ֽ���
	*/

	FILE* fp;
	//���ļ�
	fp = fopen("text2.txt", "rt");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}

	//����һ���Խ��ļ����ݶ�ȡ���ļ��ڴ���
	//1���õ��ļ����ܴ�С
	int file_length = 0;
	//ʹ��fseek ���ļ�ָ�� ��λ���ļ�β��
	fseek(fp, 0, SEEK_END);
	//ʹ��ftell ��ȡ�ļ�ָ���ƫ���� == �ļ����ܴ�С
	file_length = ftell(fp);
	//ʹ��rewind ��λ�ļ���ָ��
	rewind(fp);
	 
	//2�������ļ��Ĵ�С �������� �ڴ�ռ�
	printf("file_length = %d\n",file_length);
	char* file_data = (char*)calloc(1, file_length + 1); // +1��Ŀ�� �ڴ�ĩβ��� '\0'
	if (file_data == NULL)
	{
		fclose(fp);
		return;
	}
	 
	//3��һ���� ���ļ����� ���뵽 �ڴ�ռ�
	fread(file_data, file_length, 1, fp);

	//�� stream ��ָ���ļ��ж�ȡ�ַ����ڶ�ȡ��ʱ���������з������������ļ���ĩβֹͣ��ȡ��
	//�����Ƕ�ȡ�� size - 1 ���ֽ�ֹͣ��ȡ���ڶ�ȡ�����ݺ�����һ��\0, ��Ϊ�ַ����Ľ�β
	//fgets(file_data, file_length + 1, fp);

	//4��������ȡ�����ļ�����
	printf("%s\n", file_data);

	//�ر��ļ�
	if (fp != NULL)
	{
		fclose(fp);
	}
	
	//�ͷ��ڴ�
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