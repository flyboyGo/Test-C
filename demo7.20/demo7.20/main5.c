#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

struct S
{
    int n;
    char c;
    int arr[0];//柔性数组成员
};

struct S2
{
    int n;
    int arr[];//柔性数组成员
};


#include <string.h>
#include <errno.h>

// int main(void) 
// {
//     printf("%d\n",sizeof(struct S));
//     printf("%d\n",sizeof(struct S2));

//     struct S2* p =(struct S2*)malloc(sizeof(struct S2)+5*sizeof(int));
//     p->n = 100;
//     int i = 0;
//     for(i = 0; i< 5; i++)
//     {
//         p->arr[i] = i;
//     }
//     for(i = 0; i< 5; i++)
//     {
//         printf("%d ",p->arr[i]);
//     }
//     printf("\n");

//     struct S2* ptr = realloc(p, sizeof(struct S2)+10*sizeof(int));
//     if(ptr != NULL)
//     {
//         p = ptr;
//         for(i = 5; i< 10; i++)
//         {
//             p->arr[i] = i;
//         }

//         for(i = 0; i< 10; i++)
//         {
//             printf("%d ",p->arr[i]);
//         }
//     }
//     else 
//     {
//         printf("%s\n", strerror(errno));
//     }
//     free(p);
//     p = NULL;
//     ptr = NULL;
//     return 0;
// }


//模拟实现柔性数组的功能
struct S3
{
    int n;
    int* arr;
};

// int main()
// {
//     struct S3* p =(struct S3*)malloc(sizeof(struct S3));
//     p->n = 200;

//     p->arr = (int*)malloc(10*sizeof(int));

//     int i = 0;
//     for(i = 0; i<10; i++)
//     {
//         p->arr[i] = i;
//     }
//     for(i = 0; i< 10; i++)
//     {
//         printf("%d ", p->arr[i]);
//     }

//     free(p->arr);
//     p->arr = NULL;

//     free(p);
//     p = NULL;
//     return 0;
// }


struct S4
{
    int n;
    int* arr;
};

 int main()
 {
     struct S4 s;
     s.n = 300;

     s.arr = (int*)malloc(10*sizeof(int));

     int i = 0;
     for(i = 0; i < 10; i++)
     {
         s.arr[i] = i;
     }
     for(i = 0; i < 10; i++)
     {
         printf("%d ",s.arr[i]);
     }
     return 0;
 }
