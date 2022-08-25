#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

 //int main() {
 //    int num = -1;
 //    int count = 0;
 //    int i = 0;
 //    while(num)
 //    {
 //        count++;
 //        num = num & (num - 1);
 //    }
 //    printf("%d\n",count);
 //    return 0;
 //}

// int main(){
//     int count = 0;
//     int num = -1;
//     for(int i=0; i<32; i++)
//     {
//         if(((num >> i)&1) == 1)
//         {
//             count++;
//         }
//     }
//     printf("%d\n", count);
//     return 0;
// }


// int main()
// {
//     char ch [10] = {'0'};
//     char ch2[10] ={"abcd"};
//     char ch3[10] = {"abcdefgert"};
//     printf("%d\n",sizeof(ch));
//     printf("%d\n",sizeof(ch2));
//     printf("%d\n",sizeof(ch3));
//     printf("%s\n",ch3);
//     return 0;
// }


//指针可以+-整数
 //int main()
 //{
 //    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
 //    int sz = sizeof(arr) / sizeof(arr[0]);
 //    //int* p = arr;
 //    // for(int i = 0; i < sz; i++)
 //    // {
 //    //     printf("%d ", *p);
 //    //     p++;
 //    // } 

 //    // for(int i = 0; i < 5; i++)
 //    // {
 //    //     printf("%d ", *p);
 //    //     p+=2;
 //    // } 

 //    int* p = &arr[9];
 //    for(int i = 0; i < 10; i++)
 //    {
 //        printf("%d ", *p);
 //        p--;
 //    } 
 //    return 0;
 //}


//指针可以比较大小
// int main()
// {
//     float values[5] = {1,2,3,4,5};
//     float* vp = NULL;
//     for(vp = &values[0]; vp<&values[sizeof(values)/sizeof(values[0])];)
//     {
//         printf("%.2f ",*vp);
//         vp++;
//     }
//     return 0;
// }

//指针-指针(两个指针必须指向一块相同类型数据连续的空间)
// int main()
// {
//     char ch[5] ={0};
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     printf("%d\n", &arr[9] - &arr[0]);//中间的元素个数
//     //printf("%d\n", &arr[9] - &ch[0]); //error
//     return 0;
// }


//循环计数器
int myStr(char ch[])
{
    int count = 0;
    // for(int i =0; i<sizeof(ch)/sizeof(ch[0]);i++)
    // {
    //     if(ch[i] != '\0')
    //     count++;
    // }
    int i = 0;
    while (ch[i] != '\0')
    {
        count++;
        i++;
    }
    return count;;
}

//指针
//int myStr2(char* ps)
//{
//    int count = 0;
//    // while(*ps != '\0')
//    // {
//    //     ps++;
//    //     count++;
//    // }
//    int i = 0;
//    while (ps[i] != '\0')
//    {
//        count++;
//        i++;
//    }
//    return count;
//}

//递归
int myStr3(char* ps)
{
    if (*ps == '\0')
        return 0;
    else
        return 1 + myStr3(ps + 1);
}

//数据类型  指针名 *(最后一个元素指针) - 数据类型  指针名 *(第一个元素的指针) == 元素的个数
int myStr4(char* ps)
{
    char* start = ps;
    char* end = ps;
    while (*end != '\0')
    {
        end++;
    }
    return end - start;
}
 int main()
 {
     //strlen - 求字符串的长度
     //递归 - 模拟事先了strlen -计数器的方式1, 递归的方式二
     char ch[] = {"abcdefg"};
     int length = myStr4(ch);
     printf("%d\n", length);
     return 0;
 }

//指针的关系运算

//指针与数组
// int main()
// {
//     int arr[10] = {0};
//     printf("%p\n", arr); // 地址-首元素的第地址
//     printf("%p\n", arr+1); //指向下一个元素的地址
//     printf("%p\n", &arr[0]);//同上
//     printf("%p\n", &arr[0]+1);//指向下一个元素的地址
//     printf("%p\n",&arr);//地址 --整个数组的地址
//     printf("%p\n", arr+1);//指向下一个相同数据类型同等空间大小的数组的地址
//     //1. &arr--&数组名 --不是表示首元素的地址,而是表示整个数组--&数组名,取出的是整个数组的地址
//     //2. sizeof(arr) --sizeof(数组名)--数组名表示的是整个数组--sizeof(数组名)计算的是整个数组的大小
//     return 0;
// }

 //int main()
 //{
 //    int arr[10] = {0};
 //    int* p = arr;
 //    int i =0;
 //    for(int i =0; i<10; i++)
 //    {
 //        printf("%p ===== %p\n", p+i, &arr[i]);
 //    }
 //    for(int i =0; i<10; i++)
 //    {
 //        *(p+i) = 1;
 //    }
 //    for(int i =0; i<10; i++)
 //    {
 //        //printf("%d ",arr[i]);
 //        printf("%d ", *(p+i));
 //    }

 //    return 0;
 //}

//二级指针
 //int main()
 //{
 //    int a = 10;
 //    int* pa = &a;
 //    int** ppa = &pa;// ppa二级指针存放的是一级指针所在空间的地址
 //    *(*ppa) = 20;
 //    printf("%d\n",**ppa); 
 //    return 0;
 //}

//指针数组 --数组 --存放指针的数组
//数组指针 -- 指针
 //int main()
 //{
 //    int a = 10;
 //    int b = 20;
 //    int c = 30;
 //    int* pa = &a;
 //    int* pb = &b;
 //    int* pc = &c;
 //    //整形数组 - 存放整形
 //    //字符数组 - 存放字符
 //    //指针数组 - 存放指针
 //    // int arr [10];
 //    // char ch [10];
 //    int* p1[3] = {&a, &b, &c};
 //    int* p2[] = {pa, pb, pc}; //指针数组
 //    for(int i = 0; i < 3; i++)
 //    {
 //        printf("%d ",*(p2[i]));
 //    }
 //    printf("\n");
 //    printf("%d\n", sizeof(p2));
 //    printf("%p\n", p2);
 //    printf("%p\n", &p2[0]);
 //    printf("%p\n", &p2);
 //    return 0;
 //}
