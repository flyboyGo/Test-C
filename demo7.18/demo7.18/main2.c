#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//λ�εĶ���
//λ�� -- ������λ
//
struct S
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};
//47bit -- 6Byte = 6*8bit

struct S2
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

struct S3
{
	int a;
	int b;
	char c;
};
// int main()
// {
// 	struct S s;
// 	printf("%ld\n", sizeof(s)); //8���ֽ�

// 	struct S2 s2;
// 	printf("%ld\n", sizeof(s2));

// 	struct S3 s3;
// 	printf("%p %p %p %p\n", &s3, &(s3.a), &(s3.b), &(s3.c));
// }


//ö��
//ö�ٶ���

//ö������
enum Sex
{
	//ö�ٵĿ���ȡֵ
	MALE = 2, //������ʼ������ֵ
	FEMALE = 4,
	SECRET
};

// enum Color
// {
// 	//���ܵ�ȡֵ -- ����
//     RED, //0
// 	GREEN, //1
// 	BLUE //2
// };

// int main()
// {
// 	enum Sex s = MALE;
// 	s = FEMALE;
// 	//s = MAN; //error

// 	enum Color c = BLUE;

// 	printf("%d %d %d\n", RED, GREEN, BLUE);
// 	printf("%d %d %d\n", MALE, FEMALE, SECRET);

// 	enum Color c2 = 2; // error

// 	return 0;
// }

#define RED 0
#define GREEN 1
#define BLUE 2

// int main()
// {
// 	int color = RED;
// 	printf("%d\n", color);
// 	return 0;
// }


//ö�ٵ��ŵ�
/*
	1. ���Ӵ���Ŀɶ��ԺͿ�ά����
	2. ��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���
	3. ��ֹ��������Ⱦ����װ��
	4. ���ڵ���
	5. ʹ�÷��㣬һ�ο��Զ���������
*/


////������(������)
union Un
{
	char c;
	int i;
};


// int main()
// {
// 	union Un u;
// 	printf("%d\n", sizeof(u)); //4

// 	printf("%p\n", &u);
// 	printf("%p\n", &(u.c));
// 	printf("%p\n", &(u.i)); //����������ַһ��
// 	return 0;
// }


// int main()
// {
// 	//int a = 0x11223344;
// 	//�͵�ַ----------------�ߵ�ַ
// 	//.....[][][11][22][33][44][][]..... ��˴洢ģʽ
// 	//.....[][][44][33][22][11][][]..... С�˴洢ģʽ
// 	//����һ������,�����ڴ��еĴ�ŵ��ֽ�˳��
// 	//��С������

// 	int a = 1;
// 	if(*(char*)&a == 1)
// 	{
// 		printf("С��\n");
// 	}
// 	else  if(*(char*)&a == 0)
// 	{
// 		printf("���\n");
// 	}
// 	return 0;
// }

int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c; //1--С��,0--���
}

// int main()
// {
// 	printf("%d\n", check_sys());
// 	return 0;
// }

//ö�����͵Ĵ�С
// int main()
// {
// 	enum Sex s = MALE;
// 	printf("%d\n", sizeof(s)); //4
// }


//������(union)�Ĵ�С
union u
{
	int a; //4   4/8 4
	char arr[5]; //5  1/8 1
};
int main()
{
	union u n;
	printf("%d\n", sizeof(n)); //8
	return 0;
}