#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*
* ���ǲ�ͬƽ̨�µ��ļ��������ˡ�
  out��ELF��ʽ���ϵ�out�ļ�����ELF��ʽ������һ��Unix�µ�ִ���ļ���ʽ��
  exe��PE��ʽ��Windows�µĿ�ִ���ļ���ʽ
  binһ����˵Ҳ�ǿ�ִ���ĵ�����Unix�¼��þӶ࣬һ����ͬ����һ������ĺܶ��ļ��ļ��ϡ�
*/
extern int Add(int, int); //�����ⲿ����

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//Ԥ�������
// 
//int main()
//{
//	printf("%s\n", __FILE__); //�ļ���ʶ
//	printf("%d\n", __LINE__); //�к�
//	printf("%s\n", __DATE__); //����
//	printf("%s\n", __TIME__); //ʱ��
//	printf("%s\n", __FUNCTION__); //������
//
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//		
//	}
//	return 0;
//}


/*
*  Ԥ����ָ��
*  #define
*  #include
*  #pragma
*  #if
*  #endif
*  #ifdef
*/


/*
* #define �����ʶ���������
* �﷨:
* #define name stuff
*/
#define MAX 100
#define STR "hello"

#define us unsigned
#define do_forever for(;;)

//int main()
//{
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//
//	us int a = 100;
//	printf("%d\n", a);
//
//	do_forever; //for(;;);
//	return 0;
//}


#define SQUARE(X) ((X)*(X))
//int main()
//{
//	int ret = SQUARE(5); // int ret = 5*5;
//	printf("ret = %d\n", ret);
//
//	ret = SQUARE(5 + 1); //�겻�Ǵ���,�����滻,����ͨ��������������,ʵ��Ч��
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("ret = %d\n", ret);
//
//	// �������#define �����п��Գ�������#define����ı��������Ƕ��ں꣬���ܳ��ֵݹ顣
//	ret = 10 * DOUBLE(MAX); 
//	printf("ret = %d\n", ret);
//
//	//��Ԥ����������#define����ķ��ŵ�ʱ���ַ������������ݲ���������
//	printf("MAX = %d\n", ret);
//	return 0;
//}


//#define SUM(X,Y) ((X) + (Y))
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int ret = SUM(x,y);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//#��һ���������ɶ�Ӧ���ַ���
#define PRINT(X) printf("the value of "#X" is %d\n",X)
#define PRINTS(FORMAT, VALUE)\
               printf("the value is "FORMAT"\n",VALUE);
//int main()
//{ 
//	//C�����л�����ڵ��ַ����ϲ���һ��
//	char* str1;
//	char* str2;
//	char* str3;
//	str1 = "hello world\n";
//	printf(str1);
//	printf(str2 = "hello ""world\n");
//	printf(str3 = "hel""lo ""world\n");
//	printf("%p %p %p\n", str1, str2, str3); //��ַһ��,�����ַ���
//
//	PRINTS("%d",10);
//
//	int a = 10;
//	int b = 20;
//	PRINT(a); //printf("the value of ""a"" is %d\n",a)
//	PRINT(b); //printf("the value of ""b"" is %d\n",a)
//	return 0;
//}


//##���԰�λ�������ߵķ��źϳ�һ�����š�������궨��ӷ�����ı�Ƭ�δ�����ʶ����
//���������ӱ������һ���Ϸ��ı�ʶ����������������δ����ġ�

#define CAT(X,Y) X##Y
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", Class84);
//
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n", Class##84);
//	//printf("%d\n", Class84);
//	return 0;
//}



#define MAX(X,Y) ((X)>(Y)?(X):(Y))

//��ĸ�����
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++); // int max = ((a++) > (b++) ? (a++) : (b++));
//	
//	printf("%d\n", max);//12
//
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}


//���뺯���Ա�

//����
int Max(int x, int y)
{
	return (x > y ? x : y);
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ڵ��õ�ʱ��
//    //���к������úͷ��صĿ���
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//
//	int c = 3.0f;
//	int d = 4.0f;
//	//����Ԥ����׶ξ�������滻
//	//û�к����ĵ��úͷ��صĿ���
//	max = MAX(c, d);//max = ((c) > (d) ? (c) : (d));
//	printf("max = %d\n", max);
//
//	max = Max(a++, b++);
//	printf("max = %d\n", max); // 20
//
//	return 0;
//}

#define SIZEOF(type) sizeof(type)

//����Դ���������
//int main()
//{
//	int ret = SIZEOF(int); //int ret = sizeof(int)
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


#include <malloc.h>
#define MALLOC(num, type) (type*)malloc(num*sizeof(type))

//int main()
//{
//	int* p = MALLOC(10, int); //int* p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}


#define MAX 200

//int main()
//{
//	printf("MAX = %d\n", MAX);
//
////����ִ��һ��������Ҫ�����¶��壬��ô���ľ���������Ҫ���Ƴ�
//#undef MAX  //�Ƴ��궨��
//
//	//printf("MAX = %d\n", MAX);
//	return 0;
//}