#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <memory.h>

//����һ���ṹ������
//����һ��ѧ������,����ͨ��ѧ������������ѧ������(����)
struct Stu
{
	char name[20];
	int age;
	char tele[11];
	char sex[10];
}s4,s5,s6,*ps; //ȫ�ֱ����б�

struct Stu s3;//ȫ�ֱ���

//�����ṹ������
struct
{
	char name[20];
	int age;
	char tele[11];
	char sex[10];
}s7,s8[5],*s;

//�ṹ������������
typedef struct student
{
	char name[20];
	int age;
	char tele[11];
	char sex[10];
} stud;

//int main()
//{
//	//�����ֲ��ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	stud s9;
//	return 0;
//}


/////�ṹ���������
//��ȷ����
struct Node
{
	int data;
	struct Node* next;
};

typedef struct NodeP
{
	int data;
	struct NodeP* next;
}Node;

//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


//�ṹ������Ķ������ʼ��
struct T
{
	double e;
	short age;
};
struct S
{
	char c;
	int a;
	double d;
	char arr[20];
	struct T st;
};
//int main()
//{
//	struct S s1 = { 'c',5,7,"ch" };
//	printf("%c %d %.3lf %s\n", s1.c, s1.a, s1.d, s1.arr);
//
//	struct S s2 = { 'a',6,8,"hello",{10,5} };
//	printf("%c %d %.3lf %s %.3lf %d", s2.c, s2.a, s2.d, s2.arr, s2.st.e, s2.st.age);
//	return 0;
//}



///�ṹ���ڴ����
struct SS
{
	char c1;
	char c2;
	int a;
};

struct SF
{
	char c1;
	int a;
	char  c2;
};

struct S3
{
	double d;
	char c;
	int i;
};

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
//int main()
//{
//	struct SS s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//
//	struct SF s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//�޸�Ĭ�϶�����
//����Ĭ�϶�����Ϊ4
#pragma pack(4)

struct S5
{
	char c1;
	double d;
};

//ȡ�����õ�Ĭ�϶�����
#pragma pack()

//int main()
//{
//	struct S5 s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}


struct S6
{
	char c;
	int i;
	double a;
};
#include <stddef.h>
//int main()
//{
//	//offsetof();(��)����ƫ����
//	printf("%d\n", offsetof(struct S6, c));
//	printf("%d\n", offsetof(struct S6, i));
//	printf("%d\n", offsetof(struct S6, a));
//	return 0;
//}



//�ṹ�崫��
struct S7
{
	int a;
	char c;
	double d;
};
//����ַ
void Init(struct S7* ps)
{
	ps->a = 200;
	ps->c = 'S';
	ps->d = 3.1415926;
}
//��ֵ
void Print(struct S7 tmp)
{
	printf("%d\n", tmp.a);
	printf("%c\n", tmp.c);
	printf("%.3lf\n", tmp.d);
}
void Print_Plus(const struct S7* ps)
{
	printf("%d\n", ps->a);
	printf("%c\n", ps->c);
	printf("%.3lf\n", ps->d);
}
int main()
{
	struct S7 s = { 0 };
	Init(&s);
	Print(s);
	Print_Plus(&s);
	return 0;
}