#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int key;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid;
//	printf("��������Ҫ����������:");
//	scanf("%d", &key);
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	if (left <= right)
//	{
//		printf("���ҵ�,λ��Ϊ:%d\n", mid);
//	}
//	else
//	{
//		printf("δ�ҵ�!");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left <= right) 
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣһ�� <windows.h>
//		system("cls");//ִ��ϵͳ����--cls-->�����Ļ <stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20];
//	for (i=0; i<3; i++)
//	{
//		printf("����������:>");
//		scanf("%s",password);
//		if (strcmp(password ,"123456") == 0) // == ���ܱȽ������ַ����Ƿ���ȣ����ʹ�ÿ⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else {
//			printf("�������!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���λ���ʹ����!\n");
//	}
//	return 0;
//}

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++) {
//		printf("%d,",sum(a));
//	}
//}

//�Ӵ�С����
//int main()
//{
//	int a, b, c, swap;
//	printf("������������:");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap = b;
//		b = a;
//		a = swap;
//		if (b < c)
//		{
//			swap = c;
//			c = b;
//			b = swap;
//		}
//	}
//	else if (a < c)
//	{
//		swap = c;
//		c = a;
//		a = swap;
//		if (b < c)
//		{
//			swap = c;
//			c = b;
//			b = swap;
//		}
//	}
//	else // a > b && a > c
//	{
//		if (b < c)
//		{
//			swap = c;
//			c = b;
//			b = swap;
//		}
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



//�Ӵ�С����
//int main()
//{
//    int a, b, c, tmp;
//	printf("������������:");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//��ӡ1~100��3�ı�������
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i%3 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}



//����������,���������������Լ��
//int main()
//{
//	int m, n, r;
//	printf("������������:");
//	scanf("%d %d", &m, &n);
//	//շת�����
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}



//��ӡ����
//int main()
//{
//	int start, end, year, count = 0;
//	printf("�������������:");
//	scanf("%d %d", &start, &end);
//	for (year = start; year <= end; year++) 
//	{
//		if ((year % 400 == 0) || (year % 100 !=0 && year %4 == 0))
//		{
//			printf("%d ",year);
//			count++;
//		}
//	}
//	printf("\n����ĸ���:%d\n",count);
//	return 0;
//}



//������
//int main()
//{
//	int i, j, start, end, count = 0;
//	printf("������������:");
//	scanf("%d %d", &start, &end);
//	for (i=start; i<= end; i++)
//	{
//		for (j=2; j<i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\n�����ĸ���Ϊ:%d\n",count);
//	return 0;
//}

//int main()
//{
//	int i, j, start, end, count = 0;
//	printf("������������:");
//	scanf("%d %d", &start, &end);
//	for (i = start; i <= end; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\n�����ĸ���Ϊ:%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i, j, start, end, count = 0;
//	printf("������������:");
//	scanf("%d %d", &start, &end);
//	if (start % 2 == 0) //�ж��Ƿ�Ϊż��
//	{
//		for (i = start; i <= end; i++)
//		{
//			for (j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					break;
//				}
//			}
//			if (j > sqrt(i))
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//	}
//	else
//	{
//		for (i = start; i <= end; i+=2)
//		{
//			for (j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					break;
//				}
//			}
//			if (j > sqrt(i))
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//	}
//	printf("\n�����ĸ���Ϊ:%d\n", count);
//	return 0;
//}

//��9�ĸ���
//��һ������λ��
int getNumberCount(int n)
{
	int count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

//int main()
//{
//	int count = 0;
//	int start, end, numberCount;
//	int temp, number;
//	printf("������������:");
//	scanf("%d %d", &start, &end);
//	for ( int i = start; i <= end; i++)
//	{
//		numberCount = getNumberCount(i);
//		number = i;
//		for ( int j = 1; j <= numberCount; j++)
//		{
//			temp = number % 10;
//			number = number / 10;
//			if (temp == 9)
//			{
//				count++;
//			}
//		}
//	}
//	printf("���Ƴ�����%d��9����", count);
//	return 0;
//}

//919 % 10 = 9    919 / 10 = 91
//91 % 10 = 1     91 / 10 = 9
//9 % 10 = 9      9 / 10 = 0



//�������
//int main()
//{
//	int min, max;
//	int flag = 1;
//	double sum = 0, number = 0;
//	printf("������������ĸ��:");
//	scanf("%d %d", &min, &max);
//	for (int i = min; i <= max; i++)
//	{
//		number = (1.0 / i) * flag;
//		printf("%f",number);
//		sum = sum + number;
//		flag = flag * (-1);
//	}
//	printf("���Ϊ:%lf\n",sum);
//	return 0;
//}


//�����ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];
//	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵΪ:%d", max);
//	return 0;
//}

//�˷��ھ���
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i * j); //2d��ʾ�����ʮ������ռ��λ,�����ո���,-��ʾ�����
//		}
//		printf("\n");
//	}
//	return 0;
//}