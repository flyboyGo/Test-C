#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//������Ϸ
void menu()
{
	printf("*******************************\n");
	printf("*******  1.paly  0.exit *******\n");
	printf("*******************************\n");
}
// RAND_MAX --> 0x7fff --> 32767
//���������ʼʱ��1970��1��1��0ʱ0��0��
void game()
{
	int ret = 0, guess = 0;
	printf("��������Ϸ\n");
	//ʱ���,��ʱ����������������������ʼ��
	//time_t time(time_t * time)
	// time_t --> typedef __time32_t time_t -->typedef long   __time32_t;
	//srand((unsigned int)time(NULL)); //null��ָ��
	ret = rand()%100+1; //���������(1~100)

	while (1)
	{
		printf("����������������>:");
		scanf("%d", &guess);
		if (ret < guess)
		{
			printf("�´���\n");
		}
		else if (ret > guess)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��,�¶���!\n");
			break;
		}
	}
}

//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ!");
//			break;
//		default:
//			printf("�������!");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	//shutdown -s -t 60
//	//system() --ִ��ϵͳ����
//
//		char input[10] = { 0 };
//		system("shutdown -s -t 60");
//	again:
//		printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//		scanf("%s", input);
//			if (0 == strcmp(input, "������")) //�Ƚ��ַ���strcmp()
//			{
//				system("shutdown -a");
//			}
//			else
//			{
//				goto again;
//			}
//	return 0;
//}

//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

int main()
{
	char arr1[] = { "hello,world" };
	// strlen --> strlen(const char * str) --> string lenght ���ַ����ĳ���
	printf("%d\n", strlen(arr1)); 
	// strcpy --> �ַ������� strcpy(char * destinaton, const char * source) Ŀ�ĵص����ݻᱻ����
	char arr2[] = {"#######"};
	char * arr3 = strcpy(arr2, arr1);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	// strcmp --> �ַ����Ƚ�
	int result = strcmp(arr1,arr2);
	printf("%d\n", result);
	return 0;
}
