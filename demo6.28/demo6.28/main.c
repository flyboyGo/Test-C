#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	;//空语句
//	return 0;
//}

//int main()
//{
//	int age;
//	printf("请输入年龄:");
//	scanf("%d",&age);
//	if (age < 18)
//		printf("青年\n");
//	else if(age >= 18 && age <50)
//		printf("中年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//}


//int main()
//{
//	//一对大括号位为一个代码块
//	//else语句会和离他最近的未匹配的if语句进行匹配
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
//	printf("请输入星期几:");
//	scanf("%d", &day);
//	switch (day) //整型表达式
//	{
//	case 1: //整型(常量)表达式
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n");
//		break;
//	default:
//		printf("输入错误!");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//
//	int day;
//	printf("请输入星期几:");
//	scanf("%d", &day);
//
//	//switch中break的语句不是必须的
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日!");
//		break;
//	case 6:
//	case 7:
//		printf("工作日!");
//		break;
//	default: //default语句可以放置到首行,它与case语句没有严格的前后关系
//		printf("输入错误!"); 
//		break;
//	}
//	return 0;
//}



//int main()
//{
//	char symbol;
//	printf("请输入算数运算符:");
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
//		printf("输入错误!");
//		break;
//	}
//	return 0;
//}


//switch 中允许嵌套使用
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
//	//		break; //跳出最近的循环体,结束循环
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
//			continue; //中止本次循环,不执行后面的语句,直接跳转到循环的判断部分,继续下次循环
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
//	printf("请输入密码:>");
//	scanf("%s", password); //输入密码,并存放到password数组中;scanf读取空格和回车前面的字符串;
//	//缓冲区还剩余一个'\n'
//	//getchar(); //吃掉回车(\n)
//
//	//char c;
//	//scanf("%c",&c); //吃掉回车(\n)
//
//
//	printf("请确认(Y/N:>)");
//	ret = getchar(); //Y/N
//	if (ret == 'Y')
//	{
//		printf("确认成功!");
//	}
//	else
//	{
//		printf("放弃确认!");
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
//	//初始化部分 条件判断部分 循环变量调整
//	for (i=1; i<=10; i++)
//	{
//		if (i == 5)
//			//break; // 1 2 3 4
//			continue;
//		printf("%d ", i); // 1 2 3 4 6 7 8 9 10
//	}
//	//for循环执行的流程	
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i=0; i<10; i++) //循环控制变量建议取值采用"前闭后开"的区间的写法//不可在for循环体中修改循环变量,防止for循环失去控制
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//for循环的初始化、判断、调整都可以省略
//	   //for循环的判断部分 如果被省略,那么判断条件就是:恒为真(死循环)
//	   
//	/*for (;;) 
//	{
//		printf("hello\n");
//	}
//	*/
//
//	//两个循环控制变量
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
//	                  //k=0,k为假,表达式的结果为假,不循环
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
//	printf("请输入需要阶乘的数:");
//	scanf("%d", &n);
//	for (int i =1; i<=n; i++)
//	{
//		var = var * i;
//	}
//	printf("%d的阶乘为%d", n, var);
//}


//int main()
//{
//	int n;
//	int sum = 0, var = 1;
//	int i,j;
//	printf("请输入需要阶乘之和的数:");
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
//	printf("%d的阶乘之和为%d",n, sum);
//	return 0;
//}


//int main()
//{
//	int n;
//	int sum = 0, var = 1;
//	int i;
//	printf("请输入需要阶乘之和的数:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//			var = var * i;
//			sum = sum + var;
//	}
//	printf("%d的阶乘之和为%d", n, sum);
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
		printf("找到了,下标是%d\n", mid);
	else
		printf("找不到\n");
}


