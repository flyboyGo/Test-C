#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test04()
{
	//fputs(�ַ���,�ļ�ָ��) ��ָ���ļ���д��һ���ַ���
	/*
	* ˵��:
	* 1����һ���ַ����������ַ����������ַ������������ַ�ָ��
	* 2���ַ���ĩβ�� '\0' ����д�뵽�ļ���
	* 
	* �ɹ�  ����д����ֽ���
    * ʧ��  ���� -1
	*/

	FILE* fp = NULL;
	//���ļ�
	fp = fopen("text.txt","wb");
	if (fp == NULL)
	{
		perror("�ļ������ڻ��ļ�Ŀ¼����!");
		return;
	}

	//д���ļ�
	//char buf[] = {"��ͷ�����£�\n��ͷ˼���硣"};
	//fputs(buf, fp);

	//ָ������
	const char* buf_plus[] = {"��ǰ���¹�\n","���ǵ���˪"};
	int n = sizeof(buf_plus) / sizeof(buf_plus[0]);
	for (int i = 0; i < n; i++)
	{
		fputs(buf_plus[i], fp);
	}

	//�ر��ļ�
	if (fp != NULL)
	{
		fclose(fp);
	}

}

void test05()
{
	//fgets(������ݵĵ��׵�ַ,n,�ļ�ָ��) //��ָ�����ļ��ж�ȡ�ַ��� 
	/*˵��
	* ��fpָ����ļ��ж�ȡ n-1 ���ַ� �ڶ��� n-1 ���ַ�֮ǰ�������з���EOF�����������
	* ����ȡ���з�����������һ�� ��\0' strΪ������ݵ��׵�ַ
	* 
	* ��ȡ�ɹ� �����ַ�����Ԫ�ص�ַ
	* ��ȡʧ�� ����NULL
	* 
	* �����ڻ�ȡ�ļ�һ�е�����
	*/

	FILE* fp = NULL;

	//���ļ�
	const char* path = "text.txt";
	fp = fopen(path,"rb");
	if (fp == NULL)
	{
		perror("�ļ������ڻ��ļ�Ŀ¼����!");
		return;
	}

	//��ȡ�ļ�
	char buf[128] = "";
	while ((fgets(buf, sizeof(buf), fp)) != NULL)
	{
		printf("%s", buf);
	}

	//�ر��ļ�
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