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


//ָ�����+-����
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


//ָ����ԱȽϴ�С
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

//ָ��-ָ��(����ָ�����ָ��һ����ͬ�������������Ŀռ�)
// int main()
// {
//     char ch[5] ={0};
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     printf("%d\n", &arr[9] - &arr[0]);//�м��Ԫ�ظ���
//     //printf("%d\n", &arr[9] - &ch[0]); //error
//     return 0;
// }


//ѭ��������
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

//ָ��
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

//�ݹ�
int myStr3(char* ps)
{
    if (*ps == '\0')
        return 0;
    else
        return 1 + myStr3(ps + 1);
}

//��������  ָ���� *(���һ��Ԫ��ָ��) - ��������  ָ���� *(��һ��Ԫ�ص�ָ��) == Ԫ�صĸ���
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
     //strlen - ���ַ����ĳ���
     //�ݹ� - ģ��������strlen -�������ķ�ʽ1, �ݹ�ķ�ʽ��
     char ch[] = {"abcdefg"};
     int length = myStr4(ch);
     printf("%d\n", length);
     return 0;
 }

//ָ��Ĺ�ϵ����

//ָ��������
// int main()
// {
//     int arr[10] = {0};
//     printf("%p\n", arr); // ��ַ-��Ԫ�صĵڵ�ַ
//     printf("%p\n", arr+1); //ָ����һ��Ԫ�صĵ�ַ
//     printf("%p\n", &arr[0]);//ͬ��
//     printf("%p\n", &arr[0]+1);//ָ����һ��Ԫ�صĵ�ַ
//     printf("%p\n",&arr);//��ַ --��������ĵ�ַ
//     printf("%p\n", arr+1);//ָ����һ����ͬ��������ͬ�ȿռ��С������ĵ�ַ
//     //1. &arr--&������ --���Ǳ�ʾ��Ԫ�صĵ�ַ,���Ǳ�ʾ��������--&������,ȡ��������������ĵ�ַ
//     //2. sizeof(arr) --sizeof(������)--��������ʾ������������--sizeof(������)���������������Ĵ�С
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

//����ָ��
 //int main()
 //{
 //    int a = 10;
 //    int* pa = &a;
 //    int** ppa = &pa;// ppa����ָ���ŵ���һ��ָ�����ڿռ�ĵ�ַ
 //    *(*ppa) = 20;
 //    printf("%d\n",**ppa); 
 //    return 0;
 //}

//ָ������ --���� --���ָ�������
//����ָ�� -- ָ��
 //int main()
 //{
 //    int a = 10;
 //    int b = 20;
 //    int c = 30;
 //    int* pa = &a;
 //    int* pb = &b;
 //    int* pc = &c;
 //    //�������� - �������
 //    //�ַ����� - ����ַ�
 //    //ָ������ - ���ָ��
 //    // int arr [10];
 //    // char ch [10];
 //    int* p1[3] = {&a, &b, &c};
 //    int* p2[] = {pa, pb, pc}; //ָ������
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
