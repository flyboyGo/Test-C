#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// int main(void) 
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     int *ptr = (int*)(&a + 1);
//     printf("%d,%d", *(a + 1), *(ptr - 1)); //û��sizeof()��û��&,�� ������ʾ������Ԫ�صĵ�ַ
//     return 0;
// }


struct Test
{
    int Name;
    char* pcName;
    short sDate;
    char cha[2];
    short sBa[4];
}*p;
//����p ��ֵΪ0x100000,���±��ʽ��ֵ�ֱ�Ϊ����
//��֪,�ṹ��Test���ͱ����Ĵ�СΪ20���ֽ�
//ָ��Ӽ�����������,ָ��Ӽ�ȡ����ָ�������

// int main()
// {
//     p = (struct Test*)0x100000;
//     printf("%p\n", p + 0x1);
//     printf("%p\n", (unsigned long)p + 0x1);
//     printf("%p\n", (unsigned int*)p + 0x1);
//     return 0;
// }


 //int main()
 //{
 //    int a[4] = {1, 2, 3, 4};
 //    int* ptr1 = (int*)(&a + 1);
 //    int* ptr2 = (int*)((int)a + 1);
 //    printf("%x,%x", ptr1[-1], *ptr2);
 //    return 0;
 //}



// int main()
// {
//     int a[3][2] = { (0, 1), (2, 3), (4, 5)}; //�����������������ű��ʽ,���ű��ʽʵ��ִ�����һ�����ʽ,ʵ�������ʼ��������Ϊ{1, 3, 5}
//     int* p;
//     p = a[0];
//     printf("%d\n", p[0]);
//     return 0;
// }


 //int main()
 //{
 //    int a[5][5];
 //    int (*p)[4];
 //    p = a;
 //    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
 //    return 0;
 //}

 //int main()
 //{
 //    int aa[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 //    int* ptr1 = (int*)(&aa + 1);
 //    int* ptr2 = (int*)(*(aa + 1)); //*(aa + 1) == aa[1] �ڶ��е�������,�ڶ��е���Ԫ�ص�ַ

 //    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
 //    return 0;
 //}


// int main()
// {
//     char* str = "abcdef"; //�����ַ���,str�д�ŵ��ǳ����ַ�����Ԫ�صĵ�ַ,����a�ĵ�ַ
//     char* a[] = {"work", "at", "alibaba"};
//     char** pa = a;
//     pa++;
//     printf("%s\n", *pa);
//     return 0;
// }


// int main()
// {
//     char* c[] = {"ENTER", "NEW", "POINT", "FIRST"};
//     char** cp[] = { c + 3, c + 2, c + 1, c };
//     char*** cpp = cp;

//     printf("%s\n", **++cpp);
//     printf("%s\n", *--*++cpp + 3);
//     printf("%s\n", *cpp[-2] + 3);
//     printf("%s\n", cpp[-1][-1] + 1);
//     return 0;
// }

//�����ַ���
#include <string.h>
#include <assert.h>
void reverse_str(char* str)
{

    //ʹ�ö���
    assert(str); //�ж�str�Ƿ�Ϊ��,��Ϊ��,�������;Ϊ��,���������,���򱨴�

    // char * end = NULL;
    // char * start = NULL;
    // char tmp;
    // end = str,start = str;
    // while(*(end) != '\0')
    // {
    //     end++;
    // }
    // end--;
    // while(end > start)
    // {
    //     tmp = *(end);
    //     *(end) = *(start);
    //     *(start) = tmp;
    //     start++;
    //     end--;
    // }


    // int i = 0;
    // int len = strlen(str);
    // char tmp;
    // for(i = 0; i < len / 2; i++)
    // {
    //     tmp = *(str+i);
    //     *(str+i) = *(str+len-1-i);
    //     *(str+len-1-i) = tmp;
    // }

    //�ݹ鷽��



}

// int main()
// {
//     char str [256] = {0};
//     printf("����������ַ���:>");
//     //scanf("%s",str);
//     gets(str); //��ȡһ��,�����ո�
//     //������
//     reverse_str(str); 
//     printf("%s", str);
//     return 0;
// }


//��n��ǰm��ĺ�,���� 2 + 22 + 222 + ...
int sum_num(int n, int num)
{
    int i = 0, sum = 0;
    for (i = 0; i < num; i++)
    {
        sum = sum + n;
        n = n * 10 + 2;
    }
    return sum;
}
// int main()
// {
//     int n = 0, num = 0;
//     printf("���������ֺ͵ڼ���ĺ�:>");
//     scanf("%d %d", &n, &num);
//     printf("%d��ǰ%d�ĺ�Ϊ%d", n, num, sum_num(n, num));
// }


#include <math.h>
//�ж�һ����Ϊ��λ��
int num_count(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n / 10;
    }
    return count;
}
//�ж�һ�����Ƿ�Ϊˮ�ɻ���
int is_fl(int n)
{
    int sum = 0, count = 0, tmp = 0, m = n;
    count = num_count(n);
    while (n)
    {
        tmp = n % 10;
        sum = sum + pow(tmp, count);
        n = n / 10;
    }
    if (sum == m)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
//��ӡˮ�ɻ���
void get_fl(int n, int m)
{
    int i = 0;
    for (i = n; i <= m; i++)
    {
        if (is_fl(i) == 1)
        {
            printf("%d ", i);
        }
    }
}
// int main()
// {
//     int n = 0, m = 0;
//     printf("������ˮ�ɻ����ķ�Χ:>");
//     scanf("%d %d", &n, &m);
//     get_fl(n, m);
//     return 0;
// }


//��ӡ����ͼ��
// int main()
// {
//     int n = 0;
//     int i = 0, j = 0;
//     scanf("%d", &n);

//     for(i = 1; i <= n ; i ++)
//     {
//         for( j =1 ; j <= (n - i)*2; j++)
//         {
//             printf(" ");
//         }
//         for( j = 0; j < 2*i - 1; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//      for(i = 1; i <= n -1 ; i++)
//     {
//         for( j =1 ; j <= i*2; j++)
//         {
//             printf(" ");
//         }
//         for( j = 0; j < 2*(n - i) - 1; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }


int count_water(int sum, int empty)
{
    if (empty == 1)
    {
        return sum;
    }
    else if (empty % 2 == 0)
    {
        return count_water(sum + (empty / 2), empty / 2);
    }
    else
    {
        return count_water(sum + (empty / 2), empty / 2 + 1);
    }
}

//int main()
//{
//    int n = 0, sum = 0;
//    printf("������Ǯ��:>");
//    scanf("%d", &n);
//    assert(n != 0);
//    printf("%dԪ�ܼƺ���%dƿ��ˮ\n", n, count_water(n, n));
//    return 0;
//}

//ģ��strlen����
int my_strlen(const char * str)
{
    assert(str);
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

//ģ��strcpy����
char* my_strcpy(char * dest, const char* res)
{
    assert(dest != NULL);
    assert(res != NULL);
    assert(my_strlen(dest) <= my_strlen(res));
    char* tmp = dest;
    while (*res != '\0')
    {
        *dest = *res;
        dest++;
        res++;
    }
    *dest = '\0';
    return tmp;
}
//int main()
//{
//    char str[] = "abcdefg";
//    printf("�ַ�������Ϊ:%d\n", my_strlen(str));
//    char str2[10] = { 0 };
//    char* str3 = my_strcpy(str2, str);
//    printf("%s\n", str3);
//    printf("%s\n", str2);
//
//    return 0;
//}

//ʹ������ż������,����λ��ǰ��,ż��λ�ں�
void print(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}
void move(int * arr, int sz)
{
    int i = 0, j = 0, tmp = 0;
    for (i = 0; i < sz; i++)
    {
        if (arr[i] % 2 == 0)
        {
            for (j = i; j < sz; j++)
            {
                if (arr[j] % 2 != 0)
                {
                    tmp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = tmp;
                }
            }
        }
    }
}
//int main()
//{
//    int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    move(arr, sz);
//    print(arr, sz);
//    return 0;
//}

