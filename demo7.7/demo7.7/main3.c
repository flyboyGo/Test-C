#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ��ѧ����һЩ����
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���   Stu--�ṹ���ǩ struct Stu--�ṹ������
//��ʽһ
struct Stu // struct Stu�ǽṹ������,Ҳ��һ������,��int����һ��,��δ�������s֮ǰ,��ͬint��ռ���ڴ�ռ�
{
    //��Ա����
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}s1, s2, s3; //s1,s2,s3������ȫ�ֵĽṹ�����

//��ʽ��
typedef struct StuPlus //typedef ������ �� stuct StuPlus ��������ΪStu
{
    //��Ա����
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;

//��C�����У�ö�����͡��ַ��ͺ͸��������ı�ʾ��ʽͳһ�����������͡�
//����C���ʽ��ʹ�ñ������͵�ֵʱ���������ͻ��Զ�����Щ��ʶ��ת��Ϊ�������档
//���ֻ��Ƶ������ǣ�����Щ����������ִ�еĲ�����������ִ�еĲ�����ȫһ��

struct S
{
    int a;
    char c;
    char arr[20];
    double d;
};

//�ṹ��Ƕ�׽ṹ��
struct T
{
    char ch[10];
    struct S s;
    int* pa;
};
 //int main(void) 
 //{
 //    //��ʼ�������������ͬʱ����ֵ
 //    struct Stu s1; //�����ֲ��ṹ�����s
 //    Stu s2; //�����ֲ��ṹ�����s2
 //    Stu s3 = {"������", 23, "13218070379", "��"}; //�����ֲ��ṹ�����s3
 //    struct Stu s4 = {"flyboy", 24, "15061644139", "Ů"}; //�����ֲ��ṹ�����s4
 //    //���ӽṹ��
 //    int a = 20;
 //    struct T t = {"hello", {23, 'a', "world", 3.0}, &a};
 //    printf("%s\n", t.ch);
 //    printf("%s\n", t.s.arr);
 //    printf("%c\n", t.s.c);;
 //    printf("%.3lf\n", t.s.d);
 //    printf("%d\n", *(t.pa));
 //    return 0;
 //}

//�ṹ�崫����
//��ֵ
void Print(Stu s)
{
    printf("%s ", s.name);
    printf("%d ", s.age);
    printf("%s ", s.tele);
    printf("%s ", s.sex);
    printf("\n");
}
//��ָ��
void Print2(Stu* s)
{
    printf("%s ", (*s).name);
    printf("%d ", s->age);
    printf("%s ", s->tele);
    printf("%s ", s->sex);
}
int main()
{
    Stu s = { "angle", 999, "12345678910", "Ů" };
    //��ӡ�ṹ�����(��ֵ��������)
    Print(s);
    Print2(&s);
    return 0;
}