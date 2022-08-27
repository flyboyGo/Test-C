#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//置换数组中的元素
void reverse_string(char arr[])
{
    char tmp = arr[0];
    int len = strlen(arr);
    arr[0] = arr[len - 1];
    arr[len - 1] = '\0';
    if (strlen(arr + 1) >= 2)
    {
        reverse_string(arr + 1);
    }
    arr[len - 1] = tmp;
}
 //int main(void) {
 //    char arr[] = "abcdef";
 //    reverse_string(arr);
 //    printf("%s\n",arr);

 //    return 0;
 //}

//求一个非负整数,各位数的和
int DigitSum(unsigned int num)
{
    if (num > 9)
    {
        return num % 10 + DigitSum(num / 10);
    }
    return num;
}
// int main()
// {
//     unsigned int num = 0;
//     scanf("%d", &num);
//     int ret = DigitSum(num);
//     printf("ret = %d\n", ret);
//     return 0;
// }

//求n的k次方
double get_pow(int n, int k)
{
    if (k < 0)
    {
        return (1.0 / get_pow(n, -k));
    }
    else if (k == 0)
    {
        return 1;
    }
    else
    {
        if (k >= 1)
        {
            return n * get_pow(n, k - 1);
        }
        else
        {
            return n;
        }
    }
}
 //int main()
 //{
 //    int k = 0;
 //    int n = 0;
 //    scanf("%d %d", &n, &k);
 //    double ret = get_pow(n, k);
 //    printf("ret = %.3lf\n", ret);
 //    return 0;
 //}

int get_fab(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        return get_fab(n - 1) + get_fab(n - 2);
    }
}

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret = get_fab(n);
//     printf("%d\n", ret);
// }