#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//����������Ԫ�ص�ַ
//	//1��sizeof(������) -- ��������ʾ��������
//	//2��&������ -- ��������ʾ������������
//	//һά����
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a)); //16    sizeof(������)-- ������������ܴ�С-��λ���ֽ� -- 16
//	//*printf("%d\n", sizeof(a + 0));//4  �����������ʾ��Ԫ�ص�ַ,0��ʾ����0��Ԫ��,a+0������Ԫ�ص�ַ
//	//printf("%d\n", sizeof(*a)); //4    ��������ʾ��Ԫ�ص�ַ,*a������Ԫ��,sizeof(*a)����4
//	//printf("%d\n", sizeof(a + 1));//4  ��������ʾ��Ԫ�ص�ַ,a+1��ʾ���ǵڶ���Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(a[1]));//4  
//	//printf("%d\n", sizeof(&a));//4     &aȡ����������ĵ�ַ,��������ĵ�ַҲ�ǵ�ַ,��ַ�Ĵ�С����4/8
//	//*printf("%d\n", sizeof(*&a));//16   &a������ĵ�ַ,����ĵ�ַ�����÷��ʵľ�������,sizeof����ľ�������Ĵ�С��λ
//	//printf("%d\n", sizeof(&a + 1));//4 &a������ĵ�ַ,&a+1,������������,�����ǵ�ַ
//	//printf("%d\n", sizeof(&a[0]));//4  &a[0]�ǵ�һ��Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(&a[0] + 1));//4  &a[0]�ǵ�һ��Ԫ�صĵ�ַ,&a[0]+1�ǵڶ���Ԫ�صĵ�ַ
//
//
//	//�ַ�����
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));     //6 sizeof�����������Ĵ�С
//	//printf("%d\n", sizeof(arr + 0)); //4 ��Ԫ�صĵ�ַ,arr+0������Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(*arr));    //1 arr����Ԫ�صĵ�ַ,*arr������Ԫ��,
//	//printf("%d\n", sizeof(arr[1]));  //1
//	//printf("%d\n", sizeof(&arr));    //4 &arr������ĵ�ַ
//	//printf("%d\n", sizeof(&arr + 1));//4 &arr������ĵ�ַ,&a+1,������������,�����ǵ�ַ
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 &arr[0]����Ԫ�ص�ַ,&arr[0]+1,����һ��Ԫ��,�ǵڶ���Ԫ�صĵ�ַ
//
//
//	//printf("%d\n", strlen(arr));        //���ֵ
//	//printf("%d\n", strlen(arr + 0));    //���ֵ
//	//printf("%d\n", strlen(*arr));       //err,strlen����Ҫ�Ĳ�����һ���ַ�ָ��,�����ݵ���'a'(97)
//	//printf("%d\n", strlen(arr[1]));     //err,strlen����Ҫ�Ĳ�����һ���ַ�ָ��
//	//printf("%d\n", strlen(&arr));       //���ֵ
//	//printf("%d\n", strlen(&arr + 1));   //���ֵ-6,&arr������ĵ�ַ,&a+1,������������
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1,&arr[0]�������һ��Ԫ�صĵ�ַ,&arr[0]+1������һ��Ԫ�صĵ�ַ
//
//
//	//�ַ���
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr)); 
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));    //1
//	//printf("%d\n", sizeof(*(&arr))); //7
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//	 
//	 
//	//printf("%d\n", strlen(arr));
//	//printf("%d\n", strlen(arr + 0));
//	//printf("%d\n", strlen(*arr)); //err
//	//printf("%d\n", strlen(arr[1])); //err
//	//printf("%d\n", strlen(&arr)); //6 &arr -- ����ĵ�ַ--����ָ�� char(*p)[7] = &arr
//	//printf("%d\n", strlen(&arr + 1)); //���ֵ  &arr -- ����ĵ�ַ--����ָ�� char(*p)[7] = &arr &arr+1--����һ������
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//�ַ�ָ��
//	char* p = "abcdef"; //ָ��p�б������ַ���������Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(p)); //ָ�����p�Ĵ�С
//	//printf("%d\n", sizeof(p + 1)); //p+1 ���ַ�b�ĵ�ַ
//	//printf("%d\n", sizeof(*p)); //1  *p���ַ����ĵ�һ���ַ�'a'
//	//printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0] == *(arr+0) p[0] == *(p+0) == 'a'
//	//printf("%d\n", sizeof(&p)); //4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//
//	//printf("%d\n", strlen(p));
//	//printf("%d\n", strlen(p + 1));
//	//printf("%d\n", strlen(*p)); //err
//	//printf("%d\n", strlen(p[0])); //err
//	//printf("%d\n", strlen(&p));
//	//printf("%d\n", strlen(&p + 1));
//	//printf("%d\n", strlen(&p[0] + 1));
//
//
//	//��ά����
//	int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a)); //48
//	//printf("%d\n", sizeof(a[0][0]));//4
//	//printf("%d\n", sizeof(a[0])); //16  a[0]�൱�ڵ�һ����Ϊһά�����������,
//	//                              //sizeof(arr[0])����������������sizeof()��,������ǵ�һ�еĴ�С
//	//printf("%d\n", sizeof(a[0] + 1));//4  a[0]�ǵ�һ�е�������,��������ʱ����Ԫ�صĵ�ַ,a[0]��ʵ�ǵ�һ�е�һ��Ԫ�صĵ�ַ
//	//                                 //���� a[0]+1 ���ǵ�һ�еڶ���Ԫ�صĵ�ַ,
//	//printf("%d\n", sizeof(*(a[0] + 1)));//4
//	//printf("%d\n", sizeof(a + 1));//4  a�Ƕ�ά�����������,û��sizeof(������),Ҳû��&(������),����a����Ԫ�ص�ַ
//	//                              //���Ѷ�ά���鿴��һά����,��ά�������Ԫ�������ĵ�һ��,a���ǵ�һ��(��Ԫ��)�ĵ�ַ
//	//                              //a+1���ǵڶ��еĵ�ַ
//	//printf("%d\n", sizeof(*(a + 1)));//16 sizeof(a[1])������ǵڶ��еĴ�С,��λ���ֽ�
//	//printf("%d\n", sizeof(&a[0] + 1));//4 �ڶ��еĵ�ַ
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 �ڶ��еĴ�С,��λ���ֽ�
//	//printf("%d\n", sizeof(*a));//16  a����Ԫ�ص�ַ--��һ�е�ַ,*a���ǵ�һ��,sizeof(*a)���Ǽ����һ�еĴ�С
//	//printf("%d\n", sizeof(a[3]));//16 sizeof()�еı��ʽ���������ʵ����
//	return 0;
//}
