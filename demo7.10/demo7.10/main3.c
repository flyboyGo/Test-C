#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ����1
//(*(void (*)())0)();
// (1)��0ǿ������ת����:void (*) ()(����ָ������) --- 0��ʱΪһ�������ĵ�ַ
// (2)����0��ַ���ĸú���

//����2
//void (* signal(int, void(*)(int)))(int);
//(1)signal��һ����������
//(2)signal�����Ĳ�����2������һ����int,�ڶ����Ǻ���ָ��,�ú���ָ��ָ��ĺ����Ĳ�����int,����������void
//(3)signal�����ķ�������Ҳ��һ������ָ��:�ú���ָ��ָ��ĺ����Ĳ�����int,����������void

//�򻯺���ָ������ void (* )(int)
//������
//typedef void(* pfun_t )(int);
//typedef unsigned int uint;
//����2��Ϊ
//pfun_t signal(int, pfun_t);


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	//printf("%d\n", *pa(2 ,3)); //err
//	//printf("%d\n", (**pa)(2, 3));
//	//printf("%d\n", (***pa)(2, 3));
//	return 0;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//����ָ������
//int main()
//{
//	//ָ������
//	int* arr[5];
//	//��Ҫ����,���������Դ���ĸ�4�������ĵ�ַ -- ����ָ�������
//	int (*pa)(int, int) = Add; 
//	int (*parr[4]) (int, int) = {Add,Sub,Mul,Div};//����ָ������
//	int (*parr2[4]) (int, int) = { &Add,&Sub,&Mul,&Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//		printf("%d\n", (*(parr2[i]))(2, 3));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{

}

//int main()
//{
//	//дһ������ָ��pf,�ܹ�ָ��my_strcp
//	char* (*pf)(char*, const char*) = &my_strcpy;
//	//дһ������ָ������pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//	char* (*pfArr[4])(char*, const char*);
//	return 0;
//}


//������
void menu()
{
	printf("**************************\n");
	printf("****** 1.add  2.sub ******\n");
	printf("****** 3.mul  4.div ******\n");
	printf("****** 5.xor  0.exit******\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//�Ľ���
//�ص�������ʹ��
void Cal(int (*pf)(int, int))
{
	int x = 0, y = 0;
	printf("����������������:>");
	scanf("%d %d", &x, &y);
	printf("%d\n", pf(x, y));
}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Cal(Add);
//			break;
//		case 2:
//			Cal(Sub);
//			break;
//		case 3:
//			Cal(Mul);
//			break;
//		case 4:
//			Cal(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//������Ľ���
//�����㺯��
int Xor(int x, int y)
{
	return x ^ y;
}

//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	//pfArr����ָ������ -- ת�Ʊ�
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("�����������:>");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�!\n");
//		}
//		else
//		{
//			printf("ѡ�����!\n");
//		}
//	} while (input);
//
//	return 0;
//}

void Again()
{
	printf("go on");
}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int (*pf)(int, int);// ����ָ��
//	int (*pfArr[4])(int, int);// pfArr��һ������--����ָ������
//	//ppfArrָ�򡾺���ָ�����顿��ָ��
//	int (*(*pfArr)[4])(int, int) = &pfArr; //ָ����ָ�������ָ��
//	//ppfArr ��һ������ָ��,ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
//	//
//	return 0;
//}