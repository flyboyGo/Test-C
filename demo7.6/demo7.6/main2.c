#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//n = n&(n-1)
// n = 13
// 1101 n
// 1100 n-1
// 1100 n
// 1011 n-1
// 1000 n
// 0111 n-1
// 0000 n
//最终版
int count_bit_one_finally(int num)
{
    int count = 0;
    while (num)
    {
        num = num & (num - 1);
        count++;
    }
    return count;
}
//改进版
int count_bit_one_plus(int num)
{
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (((num >> i) & 1) == 1)
        {
            count++;
        }
    }
    return count;
}
//使用无符号数,不考虑符号位的正负
int count_bit_one_max(unsigned int num)
{
    int count = 0;
    while (num)
    {
        if (num % 2 == 1)
        {
            count++;
        }
        num = num / 2;
    }
    return count;
}
//无法对负数其作用
int count_bit_one(int num)
{   
    int count = 0;
    while (num)
    {
        //想获得十进制数的各个位的数可以通过模10,除10,取得
        //想要获得二进制数的各个位的数可以通过模2,除2,取得
        if (num % 2 == 1)
        {
            count++;
        }
        num = num / 2;
    }
    return count;
}


//写一个函数求a的二进制(补码)表示中有几个一
 //int main()
 //{
 //    int count = 0;
 //    int num = 0;
 //    printf("输入需要统计的数据>:");
 //    scanf("%d",&num);
 //    printf("count = %d\n", count_bit_one_finally(num));
 //    //system("pause"); //system库函数-执行系统命令-pause(暂停)
 //    return 0;
 //}

//int main()
//{
//    unsigned int  a = -1;
//    printf("%d\n", a);// -1 -->%d表示输入或输出十进制有符号数
//    printf("%u\n", a); //4294967295 
//    return 0;
//}


//求两个整数二进制中不同的位数
int get_diff_bit(int m, int n)
{
    int tmp = m ^ n;
    int count = count_bit_one_finally(tmp);
    return count;
}
//int main()
//{
//    int m = 0, n = 0;
//    scanf ("%d %d", &m, &n);
//    int count = get_diff_bit(m, n);
//    printf("count = %d\n", count);
//}


//打印一个数的二进制位中偶数位和奇数位的序列
void print_bit(int m)
{
    //打印奇数位
    for (int i = 30; i >= 0; i -= 2)
    {
        printf("%d ", (m >> i) & 1);
    }
    printf("\n");
    //打印偶数位
    for (int i = 31; i >= 1; i -= 2)
    {
        printf("%d ", (m >> i) & 1);
    }
}
//int main()
//{
//    int m = 0;
//    scanf("%d",&m);
//    print_bit(m);
//    return 0;
//}

//交换两个变量，不创建临时变量
//a^a=0;       a^0=a;
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    a = a ^ b;
//    b = a ^ b ;
//    a = a ^ b;
//    printf("a=%d,b=%d\n", a, b);
//}

void print_arr(int* p, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ",*(p+i));
    }
}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    print_arr(arr, sz);
//    return 0;
//}

/////////////////////////////////////////////////////
//递归
//输出一个整数的各个位
void print_every(int num)
{
    if (num > 9)
    {
        print_every(num/10);
    }
    printf("%d ", num%10);
}
//求阶乘
int get_fac(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * get_fac(n - 1);
    }
}

//求字符串
int get_str(char* str)
{
    if (*str != '\0')
        return 1 + get_str(str + 1);
    else
        return 0;
}

//字符串的逆序
//递归
//a b c d e f
//a 和 f的交换
//逆序 b c d e
//b 和 e的交换
//逆序
//递归
void reverse_str_plus(char str[])
{

}
void reverse_str(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        int tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
}
//int main()
//{
//    char arr[] = "abcdefg";
//    reverse_str(arr);
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%c ",arr[i]);
//    }
//    return 0;
//}
