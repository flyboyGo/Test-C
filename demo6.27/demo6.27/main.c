#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int a = 0;
//	int b = ~a;
//	//~-->��(2����)λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ��,�洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001--->-1
//	printf("%d\n",b);//ʹ�õ�,��ӡ�����������ԭ��
//	return 0;
//}

/*
* ֻҪ������,�ڴ��д洢�Ķ��Ƕ����ƵĲ���
* ����-->ԭ�롢���롢���룬��ͬ
* ����:
* ԭ��                          --->  ����                               --->����
* ֱ�Ӱ�������д������������     ԭ��ķ���λ����,����λ��λȡ��         ����+1
* -2
* 10000000000000000000000000000010  -->ԭ��
* 11111111111111111111111111111101  -->����
* 11111111111111111111111111111110  -->����
*/


//int main() {
//	int a = 10;
//	int b = a++; //����++,��ʹ�ã���++
//	printf("a=%d,b=%d\n",a,b);// 11 10
//	b = 0; a = 10;
//	b = ++a; //ǰ��++,��++,��ʹ��
//	printf("a=%d,b=%d\n", a, b);// 11 11
//	b = 0; a = 10;
//	b = a--; //����--,��ʹ��,��--
//	printf("a=%d,b=%d\n", a, b);// 9 10
//	b = 0; a = 10;
//	b = --a; //ǰ��--,��--,��ʹ��
//	printf("a=%d,b=%d\n", a, b);// 9 9
//	return 0;
//}

//int main() {
//	int a = (int)3.14; //(��������)ǿ������ת����
//	printf("%d\n",a);
//	return 0;
//}


//int main() {
//	// �� -->��0
//	// �� --> 0
//	// && -->�߼���
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n",c); // 1
//	int d = 0;
//	c = a && d;
//	printf("%d\n", c); // 0
//
//	// || �߼���
//	c = a || b;
//	printf("%d\n", c); // 1
//	c = a || d;
//	printf("%d\n", c); // 1
//	int e = 0;
//	c = e || d;
//	printf("%d\n", c); // 0
//	return 0;
//}


//int main() {
//// expr1 ? expr2 : expr3 -->����������(��Ŀ������)
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = a > b ? a: b;
//	printf("%d\n",max);
//	return 0;
//}

//���ű���ʽ
//expr1 , expr2 , expr3 ,...,exprN

int Add(int x,int y) 
{
	int z = 0;
	z = x + y;
	return z;
}
//int main() {
//	int arr[10] = { 0 };
//	arr[4];//[] -->�±����ò�����
//	int a = 10;
//	int b = 10;
//	int sum = Add(a,b);// ()-->�������ò�����
//	return 0;
//}

//�����ؼ���
//int float ....

//int main() {
//	auto int a = 10; //�ֲ�����--->�Զ�����(auto�Զ�����)
//	register int b = 10; // �����a����ɼĴ������� (register�Ĵ�������)
//	// int ����ı������з��ŵ�
//	// signed int === int (signedĬ��ʡ��)
//	int c = 10;
//	c = -20;
//	//unsigned int �����޷��ű���
//	  unsigned int num = -1;
//	printf("%d\n",num);
//
//	//union -->�����塢������
//	//volatile
//	//typedef -->���Ͷ��塢�����ض���
//	typedef unsigned int u_int;
//	//u_int��unsigned int�ı���(u_int==>unsigned int)
//	u_int var = 20;
//	printf("%d\n",var);
//
//	auto signed int var2 = 10;
//	printf("%d\n",var2);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//    unsigned int b = 1;
//
//	if (a > b)
//		printf("a > b, a = %d, b = %u\n", a, b);
//	else
//		printf("a <= b, a = %d, b = %u\n", a, b);
//	exit(0);
//	//10000000 00000000 00000000 00000001
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111(�޷������ʱ,ȫ��������ֵΪ2^32-1)
//}


//static ���ξֲ�����
//�ֲ��������������ڱ䳤��
//void test()
//{
//	static int  a = 1;
//	a++;
//	printf("a=%d\n",a);
//}
//int main() {
//	int i = 0;
//	while (i < 5) 
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//static ����ȫ�ֱ���
//�ı��˱�����������--->�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��,����Դ�ļ���û��ʹ����
//int main() {
//	//extern -- �����ⲿ���ŵ�
//	extern int g_val; //ȫ�ֱ���g_valλ��stati.cԴ�ļ���
//	printf("%d\n", g_val);
//	return 0;
//}
/*
*     1���ֲ������� 
        �������ڣ� �Ӷ��忪ʼ�� ����ģ�����
        ������ ��ģ����

    2��ȫ�ֱ�����
        �������ڣ� �Ӷ��忪ʼ�� ���������
        ������ �ļ��ڣ��� extern �������������������̣�

    3��static���εľֲ�������
        �������ڣ��Ӷ��忪ʼ�����������
        ������ ��ģ����

    4��static����ȫ�ֱ�����
        �������ڣ��Ӷ��忪ʼ�����������
        ������ �������ڸ��ļ���ʹ��

*/


//static���κ���
//�ı��˺�����������-->��׼ȷ
//static���κ���,�ı��˺�������������
//��ͨ�ĺ���Ĭ�Ͼ����ⲿ��������--->static���κ�---->�ڲ���������


//�����ⲿ����
extern int Add(int, int);

//int main() {
//    int a = 10;
//    int b = 20;
//    int sum = Add(a, b);
//    printf("%d\n",sum);
//	return 0;
//}









