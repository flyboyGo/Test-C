#define _CRT_SECURE_NO_WARNINGS 1

//����һ����stdio.h���ļ�
//std->��׼standard,i->inout,o->output
#include <stdio.h>
//int �����͵ĺ���
//mainǰ���int��ʾmain�������÷���һ������ֵ
/*
int main() //������ -> ��������->main�������ҽ���һ��
{
	//�����������
	//��Ļ�����hello world
	//����-->printf ->function��ӡ����
	//�⺯��->c���Ա����ṩ������ʹ�õĺ���
	//#include
	printf("hello world\n");
	return 0;
}
*/


/*
 ����д���Ѿ���ʱ��
void main()
{

}
*/

//%d -> ��ӡ����
//%c -> ��ӡ�ַ�����
//%f -> ��ӡ��������->С��
//%p -> �Ե�ַ����ʽ��ӡ
//%x -> ��ӡ16��������
//int main() {
//	// char ->�ַ�����
//	char ch = 'A';//�ڴ�
//	printf("%c\n",ch);//%c->��ӡ�ַ���ʽ������
//	
//	// short int ->������
//
//	// int ->����
//	int age = 20;
//	printf("%d\n",age);//%d->��ӡ����ʮ��������
//
//	// long -> ������
//	long num = 100;
//	printf("%d\n",num);
//
//	//float ->�����ȸ�������
//	float f = 5.0;
//	printf("%f\n",f); // 5.000000
//
//	//double ->˫���ȸ�������
//	//�����Ⱥ�˫����Ĭ�϶���6λС��
//	double d = 3.4;
//	printf("%f\n", d); //3.400000
//	printf("%lf\n",d); //3.400000
//
//	return 0;
//}

//ͬһ�������͵��޷��š��з������ڵĿռ��С��һ�µ�
//������еĵ�λ
//bit ����λ
//byte �ֽ�  һ���ֽ�=8������λ
//kb   1kb = 1024 byte
//mb   1mb = 1024 kb
//gb   1gb = 1024 mb
//tb   1tb = 1024 gb
//pb   1pb = 1024 tb

//int main() {
//	printf("%d\n", sizeof(char));  // 1
//	printf("%d\n", sizeof(short)); // 2
//	printf("%d\n", sizeof(int));   // 4
//	printf("%d\n", sizeof(long));  // 4
//	printf("%d\n", sizeof(long long)); // 8
//	printf("%d\n", sizeof(float));  // 4
//	printf("%d\n", sizeof(double)); // 8
//	return 0;
//}

//int main() {
//	//���� 20
//	short age = 20; //���ڴ�����2���ֽ�=16bitλ,���20
//	float weight = 95.6f; //(95.6������Ĭ����double����,��Ҫ�ں������f,��������������)���ڴ�����4���ֽ�,���С��
//	/*c���Ա�׼�涨
//	sizeof(long)>=sizeof(int)*/
//	return 0;
//}

//int num = 20;//ȫ�ֱ���->�����ڴ����({})֮��ı���
//int main() {
//	int num = 10;//�ֲ�����->�����ڴ����({})֮�ڵı���
//	printf("%d\n",num); //ȫ�ֱ�����ȫ�ֱ��������ֽ��鲻Ҫ��ͬ
//	                    //���ֲ�������ȫ�ֱ�����������ͬʱ,�ֲ���������
//	return 0;
//}

//int a = 100;
//int main() {
//	{
//		int a = 10;
//	}
//	printf("%d\n",a);
//	return 0;
//}


int main() {
	//�����������ĺ�
	int num1 = 0;
	int num2 = 0;
	//��������->ʹ�����뺯��scanf
	scanf("%d%d",&num1,&num2);//&ȡ��ַ����
	int sum = 0;
	//C�����﷨�涨,����Ҫ�����ڵ�ǰ��������ǰ��
	sum = num1 + num2;
	printf("sum=%d",sum);
	return 0;
}

//int main() {
//	//�ֲ�������������
//	int num = 0;
//	{
//		printf("%d", num);
//	}
//	return 0;
//}

//int global = 2022;
//void fn() {
//	printf("%d",global);
//}
//int main() {
// ȫ�ֱ���������
//	printf("%d\n",global);
//	fn();
//	return 0;
//}

//int main() {
//	//Ϊ�����ı�ʶ��
//	//����extern�ⲿ����
//	extern int g_val;
//	printf("%d",g_val);
//	return 0;
//}

//int main() {
//	{
//		int a = 10;
//		printf("%d\n",a);
//	}
//	/*prting("%d\n",a);*/
//	return 0;
//}

//scanf��C���������ṩ��,���еı��������ṩ֧��
//scanf_s����C���Եı�׼,VS�������ṩ��,�����������޷�ʶ��,��ƽ̨�Բ����ֲ�Բ,������ò�ʹ��
//�����������Դ�ļ��ĵ�һ����� #define _CRT_SECURE_NO_WARNINGS 1

//scanf
//strcpy
//strlen
//strcat
//...
//����ȫ��

