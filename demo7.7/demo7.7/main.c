#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//ģ��ʵ��strcpy�⺯��
void my_strcpy(char* dest, const char* src)
{
	/*for (int i = 0; i <= strlen(src); i++)
	{
		*(dest + i) = *(src + i);
	}*/

	//while (*src != '\0')
	//{
	//	*dest = *src;
	//	dest++;
	//	src++;
	//}
	//*dest = *src; // *src = '\0'


	//while (*dest++ = *src++) //*src��ֵ����dest,*src�����ֵ��Ϊwhileѭ���жϵ�����
	//{
	//	;
	//}

	/*if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)
		{
			;
		}
	}*/

	//���� assert(��Ҫ����ͷ�ļ�)
	//assert(dest != NULL); //����(���ʽ�Ľ��Ϊ��,����ִ��)
	//assert(src != NULL); //����
	//while (*dest++ = *src++)
	//{
	//	;
	//}
}

//���հ�
char* my_strcpy_plus(char * dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL); //����(���ʽ�Ľ��Ϊ��,����ִ��)
	assert(src != NULL); //����
	//��srcָ����ַ���������destָ��Ŀռ�,����'\0'�ַ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy_plus(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//    int num = 10;
//	//const int* p = &num; 
//	//*p = 20; // err const������ָ�����*�����ʱ,���ε���*p,Ҳ����˵,����ͨ���ı�*p(num)��ֵ
//	      
//	//int n = 100;
//	//int* const p = &num;
//	//p = &n;  // const������ָ�����* ���ұ�ʱ, ���ε���ָ�����p����,Ҳ����˵p���ܸı���
//	printf("%d\n", num);
//	return 0;
//}

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL); //����ָ��,��ָ֤�����Ч��
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}