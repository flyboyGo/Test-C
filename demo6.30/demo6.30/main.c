#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//ϵͳ����
//int main()
//{
//	char arr1[] = { "hello,world" };
//	// strlen --> strlen(const char * str) --> string lenght ���ַ����ĳ���
//	printf("%d\n", strlen(arr1));
//	// strcpy --> �ַ������� strcpy(char * destinaton, const char * source) Ŀ�ĵص����ݻᱻ����
//	char arr2[] = { "#######" };
//	char* arr3 = strcpy(arr2, arr1);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	// strcmp --> �ַ����Ƚ�
//	int result = strcmp(arr1, arr2);
//	printf("%d\n", result);
//	return 0;
//}

//int main()
//{
//	char arr[] = {"hello,world"};
//	printf("%s\n",arr);
//	memset(arr, '*', 5); // void *memset(void *str, int c, size_t n) �����ַ� c��һ���޷����ַ��������� str ��ָ����ַ�����ǰ n ���ַ���
//	printf("%s\n", arr);
//	return 0;
//}

//�Զ��庯��
int get_max(int x, int y)
{
	return(x > y) ? (x) : (y);
}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("��������Ҫ�Ƚϵ�������:\n");
//	scanf("%d %d", &num1, &num2);
//	printf("�ϴ����Ϊ:%d\n", get_max(num1, num2));
//	return 0;
//}

//������
// ��ʵ�δ��ݸ��β�ʱ,�β���ʵ��ʵ�ε�һ����ʱ�Ŀ���
// ���βε��޸��ǲ���Ӱ�쵽ʵ�ε�
void swap(int x, int y) //�β�--��ʽ�ϵĲ���
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

//������
void swap_plus(int* pa, int* pb) 
{
	int tmp = 0; //pa��pb-->ָ�����
	tmp = *pa; //*pa -->�����ò���
	*pa = *pb;
	*pb = tmp;
	*pa = 20;
}
//int main()
//{
//	int num1 = 0, num2 = 0;
//	printf("��������Ҫ�Ƚϵ�������:\n");
//	scanf("%d %d", &num1, &num2);
//	//���ú���
//	//��ֵ����
//	swap(num1, num2);
//
//	//��ַ����
//	swap_plus(&num1, &num2); //ʵ��-->ʵ�ʴ��ݸ�������ֵ
//	printf("%d %d\n", num1, num2);
//	return 0;
//}

//�ж��Ƿ�������,�Ƿ���1���񷵻�2
int is_prime(int n)
{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	return 1;
}


//int main()
//{
//	//����������,���֮������е�����
//	int num1 = 0, num2 = 0, count = 0;
//	printf("����������:\n");
//	scanf("%d %d", &num1, &num2);
//	if (num1 == 1)
//	{
//		num1 = num1 + 1;
//	}
//	for (int i = num1; i <= num2; i++)
//	{
//		//�ж��Ƿ�������
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n����%d������\n", count);
//	return 0;
//}

//�ж��Ƿ�������
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else {
		return 0;
	}
}

//int main()
//{
//	int start = 0, end = 0, count = 0;
//	printf("�����������:\n");
//	scanf("%d %d", &start, &end);
//	for (int i = start; i <= end; i++)
//	{
//		//�ж��Ƿ�������
//		if (1 == is_leap_year(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n����%d������\n", count);
//	return 0;
//}

//���ֲ������������е�ֵ
                  //����arr��һ��ָ��
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	// int sz = sizeof(arr)/sizeof(arr[0]);
	int right = sz ;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
//int main()
//{
//	//���ֲ���
//	//��һ������������в��Ҿ����Ī����
//	//����ҵ��˷���,��������±�;�Ҳ�������-1
//
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = binary_search(arr, k, sz); // arr ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ������ֵ!\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±�Ϊ:%d\n",ret);
//	}
//	return 0;
//}

void count_time(int* p)
{
	(*p)++;
}
//int main()
//{
//	int num = 0;
//	count_time(&num);
//	printf("���õĴ���:%d\n",num);
//	count_time(&num);
//	printf("���õĴ���:%d\n", num);
//	count_time(&num);
//	printf("���õĴ���:%d\n", num);
//	count_time(&num);
//	printf("���õĴ���:%d\n", num);
//	return 0;
//}


//int main()
//{
//	printf("%d ", printf("%d ", printf("%d ", 43))); //4321 printf()�����ķ���ֵ�Ǵ�ӡ�ַ��ĸ���
//	return 0;
//}



#include "add.h"  // �����Լ���ͷ�ļ�ʹ�á���(˫����)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//�����ݹ� 12345
void print(int n)
{
	if (n > 9)
	{
		print(n/10);
	}
	printf("%d ", n % 10);
}

//int main()
//{
//	unsigned int num = 0;
//	printf("������һ����\n");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

int my_strlen(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


//���ַ����ĳ���
//�ݹ�ķ���
int my_strlen_plus(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen_plus(str+1);
	}
	else
	{
		return 0;
	}
}
//int main()
//{
//	char arr[] = "bit";
//	//ģʽʵ����һ��strlen����
//	//int len = my_strlen(arr); //arr������,���鴫��,����ȥ�Ĳ�����������,���ǵ�һ��Ԫ�صĵ�ַ
//	int len = my_strlen_plus(arr);
//	printf("len = %d\n", len);
//	return 0;
//}


//��׳�
//�ǵݹ�
int fac(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}
//�ݹ�
int factorial(int n)
{
	if (n > 1)
	{
		return n * factorial(n - 1);
	}
	else
	{
		return 1;
	}
}
//int main()
//{
//	int num = 0;
//	printf("������һ����\n");
//	scanf("%d", &num);
//	int var = factorial(num);
//	printf("%d�Ľ׳�Ϊ%d\n", num, var);
//}


//���n��쳲�������
//�ݹ�

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int fib_plus(int n)
{
	int a = 1, b = 1, c = 0;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i <= n - 2; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}

	//int a = 1, b = 1, c = 1;
	//while (n > 2)
	//{
	//	c = a + b;
	//	a = b;
	//	b = c;
	//	n--;
	//}
	//return c;
}

//int main()
//{
//	int n = 0, ret = 0;
//	printf("������ڼ�����:\n");
//	scanf("%d", &n);
//	ret = fib_plus(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

