#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 100
#include <stdio.h>
#include <string.h>
static int g_val = 2020; //ȫ�ֱ���

//#define���峣���ͺ�

//����һ������
static int Add(int x,int y) 
{
	int z = x + y;
	return z;
}

//������ʵ��
int getMax(int x,int y)
{
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

//���ʵ��
#define getMAX(X,Y) (X>Y?X:Y)


//int main() {
//	int a = MAX;
//	printf("%d\n",a);
//	int b = 10;
//	int c = 20;
//
//	//����
//	 int max1 = getMax(c, b);
//	 printf("%d\n",max1);
//	
//	//��ķ�ʽ
//	int max2 = getMAX(c, b); //��getMAX(c,b)�滻��(c>b?c:b);
//	printf("%d\n", max2);
//
//	return 0;
//}


//int main() 
//{
//	int a = 10;//4���ֽ�
//	//��һ�ֱ�����������ŵ�ַ��--->ָ�����
//	int* p = &a;//ȡ��ַ
//	printf("%p\n",p);
//	printf("%p\n",&a); //��ַ
//	//*p -->�����ò�����
//	*p = 20;
//	printf("%d\n",a);
//
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n",ch);
//	return 0;
//}



//int main()
//{
//	int a = 0; //������4���ֽڵĿռ�
//	printf("%p\n",&a);
//	int* p = &a; //p��һ����ŵ�ַ�ı���-->ָ�����
//	printf("%p\n",p);
//	*p = 1; //*�����ò�����/��ӷ��ʲ�����
//	printf("%d\n",a);
//
//	double d = 3.14;
//	double* p2 = &d;
//	printf("%p\n",p2);
//	*p2 = 3.141592;
//	printf("%lf\n",d);
//	printf("%lf\n",*p2);
//
//	printf("%d\n", sizeof(p2)); // 32λƽ̨-->4���ֽ�  64λƽ̨-->8���ֽ�
//
//	printf("%d\n",sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}


//�ṹ��
//�����ṹ������
struct Book
{
	char name[20]; //C���Գ������ (name����)
	short price; // 45 (price����)
};
//int main()
//{
//	//���ýṹ������-->����һ�������͵Ľṹ�����
//	// . �ṹ�����.��Ա
//	// -> �ṹ��ָ��->��Ա
//	struct Book b1 = {"C���Գ������",55};
//	printf("����:%s,�۸�:%d\n",b1.name,b1.price);
//	b1.price = 15;
//	printf("�۸�:%d\n",b1.price);
//
//	struct Book* pb = &b1;
//	printf("%p\n",pb);
//	printf("����:%s,�۸�:%d\n",(*pb).name,pb->price);
//
//	strcpy(b1.name,"C++�������");  //strcpy-->string copy -->�ַ�������-->�⺯��--string.h
//	printf("����:%s\n", pb->name);
//	return 0;
//}

