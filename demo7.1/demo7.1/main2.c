#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//汉诺塔问题
void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%c -> %c\n", A, C);
	}
	else                     
	{
		hanoi(n - 1, A, C, B);
		printf("%c -> %c\n", A, C);
		hanoi(n - 1, B, A, C);
	}
}
int main()
{
	hanoi(2 , 'A', 'B' , 'C');
	return 0;
} 

//跳台阶问题
