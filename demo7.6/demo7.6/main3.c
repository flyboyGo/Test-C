#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Init(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        arr[i] = 1;
    }
}
void Print(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[], int sz)
{
    int temp;
    // for(int i = 0; i < sz / 2; i++)
    // {
    //     temp = arr[i];
    //     arr[i] = arr[sz - i - 1];
    //     arr[sz - i - 1] = temp;
    // }

    int left = 0;
    int right = sz - 1;
    while (left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    printf("\n");
}
// int main(void) {
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //Init(arr,sz); //�������ʼ��
//    Print(arr, sz);
//    reverse(arr, sz);
//    Print(arr, sz);
//    return 0;
// }

 //int main()
 //{
 //    int arr1[] = {1,3,5,7,9};
 //    int arr2[] = {2,4,6,8,10};
 //    int temp;
 //    for(int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
 //    {
 //        temp = arr1[i];
 //        arr1[i] = arr2[i];
 //        arr2[i] = temp;
 //    }
 //    Print(arr1, 5);
 //    Print(arr2, 5);
 //    return 0;
 //}

 //int main()
 //{
 //    int arr[] = {1,2,3,4,5};
 //    short* p =(short*)arr;
 //    for(int i = 0; i <= 4; i++)
 //    {
 //        *(p + i) = 0;
 //        if (i == 4) {
 //            printf("%p\n", p+4);
 //            printf("%p\n", &arr[2]);
 //        }
 //    }
 //    for(int j = 0; j <= 4; j++)
 //    {
 //        printf("%d ",arr[j]);
 //    }
 //    return 0;
 //}

 //int main()
 //{
 //    int a = 0x11223344; //���ڴ���еĴ������Ϊ44332211(���ŷ���)
 //    char* pc = (char*)&a;
 //    *pc = 0; //�ı�44���ڵ�һ���ֽ�,00332211
 //    printf("%x\n", a); //11223300,�������
 //    return 0;
 //}

// int i;//ȫ�ֱ���-����ʼ��-Ĭ��Ϊ0
// int main()
// {
//     i--;
//     if(i > sizeof(i)) //sizeof()-�������/������ռ���ڴ�Ĵ�С >=0,�������ڵ���0,����sizeof�������صĽ���涨Ϊ �޷�����,���ԱȽ�ʱ,��iת��Ϊ�޷�����
//                       // -1
//                       //10000000 00000000 00000000 00000001 ԭ��
//                       //11111111 11111111 11111111 11111110 ���� + 1
//                       //11111111 11111111 11111111 11111111 ����
//                       //��i=-1,ת��Ϊ�޷�����,���λ�����Ƿ���λ,����ֵλ,��ʱi��ֵΪ 2^32 - 1
//     {
//        printf(">n");
//     } 
//     else
//     {
//         printf("<\n");
//     }
//        return 0;
// }

//int main()
//{
//    int a, b, c;
//    a = 5;
//    c = ++a;
//    b = ++c, c++, ++a, a++;
//    b += a++ + c;
//    printf("%d %d %d", a, b, c);
//    return 0;
//}
