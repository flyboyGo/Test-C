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
//���հ�
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
//�Ľ���
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
//ʹ���޷�����,�����Ƿ���λ������
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
//�޷��Ը���������
int count_bit_one(int num)
{   
    int count = 0;
    while (num)
    {
        //����ʮ�������ĸ���λ��������ͨ��ģ10,��10,ȡ��
        //��Ҫ��ö��������ĸ���λ��������ͨ��ģ2,��2,ȡ��
        if (num % 2 == 1)
        {
            count++;
        }
        num = num / 2;
    }
    return count;
}


//дһ��������a�Ķ�����(����)��ʾ���м���һ
 //int main()
 //{
 //    int count = 0;
 //    int num = 0;
 //    printf("������Ҫͳ�Ƶ�����>:");
 //    scanf("%d",&num);
 //    printf("count = %d\n", count_bit_one_finally(num));
 //    //system("pause"); //system�⺯��-ִ��ϵͳ����-pause(��ͣ)
 //    return 0;
 //}

//int main()
//{
//    unsigned int  a = -1;
//    printf("%d\n", a);// -1 -->%d��ʾ��������ʮ�����з�����
//    printf("%u\n", a); //4294967295 
//    return 0;
//}


//�����������������в�ͬ��λ��
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


//��ӡһ�����Ķ�����λ��ż��λ������λ������
void print_bit(int m)
{
    //��ӡ����λ
    for (int i = 30; i >= 0; i -= 2)
    {
        printf("%d ", (m >> i) & 1);
    }
    printf("\n");
    //��ӡż��λ
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

//����������������������ʱ����
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
//�ݹ�
//���һ�������ĸ���λ
void print_every(int num)
{
    if (num > 9)
    {
        print_every(num/10);
    }
    printf("%d ", num%10);
}
//��׳�
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

//���ַ���
int get_str(char* str)
{
    if (*str != '\0')
        return 1 + get_str(str + 1);
    else
        return 0;
}

//�ַ���������
//�ݹ�
//a b c d e f
//a �� f�Ľ���
//���� b c d e
//b �� e�Ľ���
//����
//�ݹ�
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
