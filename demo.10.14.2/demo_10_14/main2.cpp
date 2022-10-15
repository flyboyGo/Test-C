#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void test01()
{

    //fgetc(�ļ�ָ��) ���ļ����ֽڶ�����
    //�ı��ļ��������ļ���β����EOF  #define EOF    (-1)
    //�������ļ��������ļ���β��ʹ��feof�жϽ�β

	FILE* fp;
	//1��ʹ��fopen�����ļ�������һ���ļ�ָ��
	fp = fopen("./text.txt", "rb");
	if (fp == NULL)
	{
		perror("�ļ������ڻ��ļ�Ŀ¼����!");
		return;
	}


	//������ʱ�����������ȡ���ַ�
	char buf;
	//2��ʹ��fgetc()�ֽڶ�ȡ�ļ� ��ȡ�ļ� fgetc()����һ�� ��ȡһ���ֽ�
	while ((buf = fgetc(fp)) != EOF)
	{
		printf("%c", buf);
	}
	printf("\n");

	//3���ر��ļ�
	if (fp != NULL)
	{
		fclose(fp);
	}
}

void test02()
{
	//fputc(�������,�ļ�ָ��) ���ļ�����д���� ����һ��fputc() д��һ���ֽ�
	//�������ɹ� �򷵻�������ֽ�
	//������ʧ�� �򷵻�һ��EOF  #define EOF    (-1)

	FILE* fp;
	//���ļ�
	fp = fopen("text2.txt","wt");
	if (fp == NULL)
	{
		perror("�ļ������ڻ��ļ�Ŀ¼����!");
		return;
	}

	//д�ļ�
	char buf[128] = "";
	printf("������Ҫд���ļ����ַ���:");
	fgets(buf,sizeof(buf),stdin); //���ȡ���з�
	buf[strlen(buf) - 1] = 0; //���ǻ��з�

	//���ַ����е�Ԫ�� ���д���ļ���
	int i = 0;
	while (buf[i] != '\0')
	{
		fputc(buf[i], fp);
		i++;
	}

	//�ر��ļ�
	if (fp != NULL)
	{
		fclose(fp);
	}
}

//���� ��һ���ļ��е����� ���Ƶ���һ���ļ���
void test03()
{
	FILE* fp_read = NULL;
	FILE* fp_write = NULL;
	
	//���ļ�
	fp_read = fopen("text.txt", "rb");
	fp_write = fopen("text2.txt","ab");
	if (fp_read == NULL)
	{
		perror("�ļ������ڻ��ļ�Ŀ¼����!");
		return;
	}

	//��ȡ�������ļ�
	char buf;
	while ((buf = fgetc(fp_read)) != EOF)
	{
		fputc(buf, fp_write);
	}

	//�ر��ļ�
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