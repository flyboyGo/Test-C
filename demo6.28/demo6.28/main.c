#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	;//�����
//	return 0;
//}

//int main()
//{
//	int age;
//	printf("����������:");
//	scanf("%d",&age);
//	if (age < 18)
//		printf("����\n");
//	else if(age >= 18 && age <50)
//		printf("����\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//}


//int main()
//{
//	//һ�Դ�����λΪһ�������
//	//else��������������δƥ���if������ƥ��
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

int IsOdd(int num)
{
	if (num % 2 == 0)
	{
		return 0;
	}
	else if (num % 2 == 1)
	{
		return 1;
	}
}
//int main()
//{
//	for (int i = 1;i <= 100;i++) 
//	{
//		if (IsOdd(i) == 1) {
//			printf("%d ",i);
//		}
//	}
//
//	int i = 1;
//	while (i <= 100) 
//	{
//		printf("%d ",i);
//		i += 2;
//	}
//	return 0;
//}

//int main()
//{
//	int day;
//	printf("���������ڼ�:");
//	scanf("%d", &day);
//	switch (day) //���ͱ��ʽ
//	{
//	case 1: //����(����)���ʽ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������!");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//
//	int day;
//	printf("���������ڼ�:");
//	scanf("%d", &day);
//
//	//switch��break����䲻�Ǳ����
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������!");
//		break;
//	case 6:
//	case 7:
//		printf("������!");
//		break;
//	default: //default�����Է��õ�����,����case���û���ϸ��ǰ���ϵ
//		printf("�������!"); 
//		break;
//	}
//	return 0;
//}



//int main()
//{
//	char symbol;
//	printf("���������������:");
//	scanf("%c",&symbol);
//	switch (symbol)
//	{
//	case '-':
//		printf("-\n");
//		break;
//	case '+':
//		printf("+\n");
//		break;
//	case '*':
//		printf("*\n");
//		break;
//	case '/':
//		printf("\\n");
//		break;
//	default:
//		printf("�������!");
//		break;
//	}
//	return 0;
//}


//switch ������Ƕ��ʹ��
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3: 
//		switch (n) //
//		{
//		case 1: n++;
//		case 2: m++; n++; break;
//		}
//	case 4: m++;
//	default:
//		break;
//	}
//	printf("%m = %d, n = %d\n", m,n); // 5 3
//	return 0;
//}


//int main()
//{
//	//while (1)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//int i = 1;
//	//while (i <= 10) 
//	//{
//	//	if (i == 5) {
//	//		break; //���������ѭ����,����ѭ��
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//		{
//			continue; //��ֹ����ѭ��,��ִ�к�������,ֱ����ת��ѭ�����жϲ���,�����´�ѭ��
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	//int ch = getchar();
//	//putchar(ch);
//	//printf("%c\n", ch);
//
//	//EOF -->end of file --> -1
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //EOF ==> ctrl + z 
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20];
//	printf("����������:>");
//	scanf("%s", password); //��������,����ŵ�password������;scanf��ȡ�ո�ͻس�ǰ����ַ���;
//	//��������ʣ��һ��'\n'
//	//getchar(); //�Ե��س�(\n)
//
//	//char c;
//	//scanf("%c",&c); //�Ե��س�(\n)
//
//
//	printf("��ȷ��(Y/N:>)");
//	ret = getchar(); //Y/N
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�!");
//	}
//	else
//	{
//		printf("����ȷ��!");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 'Y';
//	int ret = (int)ch;
//	printf("%c\n",89); // Y
//	printf("%d\n",'Y'); // 89
//	return 0;
//}

//int main()
//{
//	putchar(89); // Y
//	putchar('Y'); // Y
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//��ʼ������ �����жϲ��� ѭ����������
//	for (i=1; i<=10; i++)
//	{
//		if (i == 5)
//			//break; // 1 2 3 4
//			continue;
//		printf("%d ", i); // 1 2 3 4 6 7 8 9 10
//	}
//	//forѭ��ִ�е�����	
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i=0; i<10; i++) //ѭ�����Ʊ�������ȡֵ����"ǰ�պ�"�������д��//������forѭ�������޸�ѭ������,��ֹforѭ��ʧȥ����
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//forѭ���ĳ�ʼ�����жϡ�����������ʡ��
//	   //forѭ�����жϲ��� �����ʡ��,��ô�ж���������:��Ϊ��(��ѭ��)
//	   
//	/*for (;;) 
//	{
//		printf("hello\n");
//	}
//	*/
//
//	//����ѭ�����Ʊ���
//	int x, y;
//	for (x = 0, y = 0; x<2 && y<5; ++x, y++) 
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	                  //k=0,kΪ��,���ʽ�Ľ��Ϊ��,��ѭ��
//	for (i = 0, k = 0; k=0; i++, k++)  //for (i = 0, k = 0; k; i++, k++)
//	{
//		k++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5) 
//		{
//			continue;
//		}
//		printf("%d ",i);
//		i++;
//	} 
//	while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int var = 1;
//	int n;
//	printf("��������Ҫ�׳˵���:");
//	scanf("%d", &n);
//	for (int i =1; i<=n; i++)
//	{
//		var = var * i;
//	}
//	printf("%d�Ľ׳�Ϊ%d", n, var);
//}


//int main()
//{
//	int n;
//	int sum = 0, var = 1;
//	int i,j;
//	printf("��������Ҫ�׳�֮�͵���:");
//    scanf("%d", &n);
//	for (i = 1; i <= n; i++) 
//	{
//		for (j = 1; j <= i; j++)
//		{
//			var = var * j;
//		}
//		sum = sum + var;
//		var = 1;
//	}
//	printf("%d�Ľ׳�֮��Ϊ%d",n, sum);
//	return 0;
//}


//int main()
//{
//	int n;
//	int sum = 0, var = 1;
//	int i;
//	printf("��������Ҫ�׳�֮�͵���:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//			var = var * i;
//			sum = sum + var;
//	}
//	printf("%d�Ľ׳�֮��Ϊ%d", n, sum);
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 7;
	int mid = 0;
	while (left <= right)            
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
		printf("�ҵ���,�±���%d\n", mid);
	else
		printf("�Ҳ���\n");
}


