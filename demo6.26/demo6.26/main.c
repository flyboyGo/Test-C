#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 10
#include <stdio.h>
#include <string.h>
#include <math.h>
//int main() {
//	//const ->������
//	//const int n = 0; //n�Ǳ���,�������ǳ�����,��������˵n�ǳ�����
//	//int arr[n] = { 0 };
//	//n = 20;
//
//	//const���εĳ�����
//	//const int num = 4;
//	//printf("%d",num);
//	//num = 8;
//	//printf("%d", num);
//
//	//���泣��
//	3;
//	3.1415926;
//
//	//#define����ı�ʶ������
//	int arr[MAX] = { 10 };
//	printf("%d",MAX);
//	printf("%d",arr[0]);
//	return 0;
//}



////ö�ٳ���
////ö��һһ�о�
////ö�ٹؼ��� -> enum
enum Sex
{
	MALE, // 0
	FEMALE, // 1
	SECRET // 2
};
enum Color {
	RED,
	YELLOW,
	BLUE
};

//MALE,FEMALE,SECRET ->ö�ٳ���

//int main() {
//	enum Sex s = FEMALE;
//	printf("%d\n",s);
//	printf("%d\n",MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n",SECRET);
// 
//	enum Color color = BLUE;
//	color = YELLOW; // ö�����ʹ����ı������Ը���
//	// BLUE = 6; //err,�������е�ö�ٳ����޷�����
//	printf("%d",color);
//	return 0;
//}

// �ַ�������
//int main() {
//	"abc"; // �ַ���
//	""; // ���ַ���  
//
//	char arr1[] = "abc"; // �ַ�����(ʹ���ַ��������ַ���,Ĭ�ϻ���������'\0')
//	char arr2[] = {'a','b','c','0','\0'}; // '\0'���ַ����Ľ�����־
//	char arr3[] = { 'a','b','c',0 }; // '\0'��ASALL�е���ֵΪ0  a Ϊ97  0wΪ48
//	char arr4[] = { 98,'\0'};
//	char arr5[] = { 99 };
//	// strlen  string length ->�����ַ����ĳ���
//	printf("%s\n",arr1);
//	printf("%d\n", strlen(arr1)); // 3(������\0�����ֽڵĳ���)
//	printf("%s\n",arr2);
//	printf("%d\n", strlen(arr2)); // 4(������\0�����ֽڵĳ���)
//	printf("%s\n",arr3);
//	printf("%s\n",arr4);  // b
//	printf("%d", strlen(arr5)); // �����
//
//	return 0;
//}


//ת���ַ�(ת���ַ�ԭ���ĺ���)
//int main() {
//	printf("abc");
//	printf("abc\n");
//	printf("D:\program files (x86)\Microsoft Visual Studio\n");
//	printf("D:\\program files (x86)\\Microsoft Visual Studio\n");
//	printf("%c",'\'');
//	return 0;
//}

//int main() {
//	printf("%d\n",strlen("D:\test\workPlace")); //15
//	printf("%d\n",strlen("c:\test\32\test.c")); // 13
//	// \32 --> 32��2��8��������
//	// 32��Ϊ8���ƴ�����Ǹ�ʮ��������,��ΪASCll��ֵ,��Ӧ���ַ�
//	// 32 --> 10����26 -->��ΪASCLL��ֵ������ַ�
//	printf("%c\n",'\32');
//	printf("%c\n",'\43');
//	// \2F --> 2F��2��16��������
//	printf("%c\n",'\x2F');
//	return 0;
//}

//int main() {
//	// /* */�޷�Ƕ��ע��
//
//	return 0;
//}

//int main() {
//	int line = 0;
//	printf("�Ƿ�Ŭ��\n");
//	while (line <= 1000) {
//		printf("%d",line);
//		printf(":��һ�д���\n");
//		line++;
//	}
//	if (line >= 2000) {
//		printf("�������!");
//	}
//	else {
//		printf("��ʧ����!");
//	}
//	
//	return 0;
//}

int Add(int x,int y) {
	int z = x + y;
	return z;
}
// ����
//int main() {
//	int sum = 0;
//	sum =Add(1,2);
//	printf("sum=%d",sum);
//	return 0;
//}

//int main() {
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
//	char ch[20];//����һ�����20���ַ����͵�����
//	printf("%d\n",arr[9]);
//	printf("%p\n", &arr);
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr[1]);
//	int i = 0;
//	while (i < 10) {
//		printf("%d ",arr[i]);
//		i++;
//	}
//	return 0;
//}


//��λ������
//int main() {
//	int a = 5 / 2; //ȡģ
//	printf("%d\n",a); // 2
//
//	// ��λ������(��2����)
//	// << ����
//	// >> ����
//	int b = 1;
//	//�����ĸ��ֽ�--32bitλ
//	//00000000000000000000000000000001
//	int c = b << 1;
//	printf("%d\n",c); // 2
//	 c = b << 2;
//	printf("%d\n", c); // 4
//	printf("%d\n",b); // 1 b����û��
//	b = 1;
//	c = b >> 1;
//	printf("%d\n",c); // 0
//	return 0;
//}


////λ������
//int main() {
//	int a = 3;
//	int b = 5;
//	int c = a & b; //������
//	//011
//	//101
//	//001 --> 1
//	printf("%d\n",c); //1
//
//
//	c = a | b; //������
//	//011
//	//101
//	//111  -->7
//	printf("%d\n",c); //7
//
//	c = a ^ b ; //�������
//	//011
//	//101
//	//110 -->6
//	printf("%d\n",c); //6
//	return 0;
//}

//��ֵ������
//int main() {
//	int a = 10;
//	a = 20;//=��ֵ  ==�ж����
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//���ϸ�ֵ��
//	// += -= *= /= %= &= ^= |= >>= <<=
//	return 0;
//}



//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main() {
//	int a = 10;
//	int b = 20;
//    //a + b; // + ˫Ŀ������
//	
//	//c���������Ǳ�ʾ���
//	//0->��(Ĭ��Ϊ0)
//	//��0 ->��(����)
//	// !(��Ŀ������)�߼��������� ���ٱ���桢�����ɼ�
//	a = -1;
//	printf("%d\n",a); // 0 ��
//	printf("%d\n",!a); //1 ��
//	printf("%d\n",!!a);//0 ��
//
//	int d = +1;//(����Ĭ��ʡ��)
//	d = -a;// -(��Ŀ������)
//	printf("%d\n",d);
//
//	//sizeof(��Ŀ������) ����ı���/�������ڿռ�Ĵ�С,��λ���ֽ�
//	printf("%d\n",sizeof(d)); //4
//	printf("%d\n",sizeof(1)); //4
//	printf("%d\n", sizeof(int)); //4
//	printf("%d\n",sizeof d);
//	printf("%d\n",sizeof 5); // 4
//	//printf("%d\n", sizeof int); //error
//
//	int arr[10] = { 0 };//ʮ������Ԫ�ص�����
//	printf("%d\n",sizeof arr); //40���ֽ�
//	int sz = sizeof(arr) / sizeof(arr[0]); // 10��Ԫ�ؿռ�
//	printf("%d\n",sz);
//	printf("%d\n",sizeof(arr[0]));
//	return 0;
//}

int main() {
	// ~-->��(2����)λȡ��
	//00000000 00000000 00000000 00000000
	//11111111 11111111 11111111 11111111
	int a = 0;
	int b = ~a;
	printf("%d\n",b);// -1
	return 0;
}
