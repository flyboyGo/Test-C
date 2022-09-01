#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//数组名是首元素地址
//	//1、sizeof(数组名) -- 数组名表示整个数组
//	//2、&数组名 -- 数组名表示的是整个数组
//	//一维数组
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a)); //16    sizeof(数组名)-- 计算的是数组总大小-单位是字节 -- 16
//	//*printf("%d\n", sizeof(a + 0));//4  数组名这里表示首元素地址,0表示跳过0个元素,a+0还是首元素地址
//	//printf("%d\n", sizeof(*a)); //4    数组名表示首元素地址,*a就是首元素,sizeof(*a)就是4
//	//printf("%d\n", sizeof(a + 1));//4  数组名表示首元素地址,a+1表示的是第二个元素的地址
//	//printf("%d\n", sizeof(a[1]));//4  
//	//printf("%d\n", sizeof(&a));//4     &a取出的是数组的地址,但是数组的地址也是地址,地址的大小就是4/8
//	//*printf("%d\n", sizeof(*&a));//16   &a是数组的地址,数组的地址解引用访问的就是数组,sizeof计算的就是数组的大小单位
//	//printf("%d\n", sizeof(&a + 1));//4 &a是数组的地址,&a+1,跳过整个数组,但还是地址
//	//printf("%d\n", sizeof(&a[0]));//4  &a[0]是第一个元素的地址
//	//printf("%d\n", sizeof(&a[0] + 1));//4  &a[0]是第一个元素的地址,&a[0]+1是第二个元素的地址
//
//
//	//字符数组
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));     //6 sizeof计算的是数组的大小
//	//printf("%d\n", sizeof(arr + 0)); //4 首元素的地址,arr+0还是首元素的地址
//	//printf("%d\n", sizeof(*arr));    //1 arr是首元素的地址,*arr就是首元素,
//	//printf("%d\n", sizeof(arr[1]));  //1
//	//printf("%d\n", sizeof(&arr));    //4 &arr是数组的地址
//	//printf("%d\n", sizeof(&arr + 1));//4 &arr是数组的地址,&a+1,跳过整个数组,但还是地址
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 &arr[0]是首元素地址,&arr[0]+1,跳过一个元素,是第二个元素的地址
//
//
//	//printf("%d\n", strlen(arr));        //随机值
//	//printf("%d\n", strlen(arr + 0));    //随机值
//	//printf("%d\n", strlen(*arr));       //err,strlen所需要的参数是一个字符指针,但传递的是'a'(97)
//	//printf("%d\n", strlen(arr[1]));     //err,strlen所需要的参数是一个字符指针
//	//printf("%d\n", strlen(&arr));       //随机值
//	//printf("%d\n", strlen(&arr + 1));   //随机值-6,&arr是数组的地址,&a+1,跳过整个数组
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1,&arr[0]是数组第一个元素的地址,&arr[0]+1是数组一个元素的地址
//
//
//	//字符串
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr)); 
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));    //1
//	//printf("%d\n", sizeof(*(&arr))); //7
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//	 
//	 
//	//printf("%d\n", strlen(arr));
//	//printf("%d\n", strlen(arr + 0));
//	//printf("%d\n", strlen(*arr)); //err
//	//printf("%d\n", strlen(arr[1])); //err
//	//printf("%d\n", strlen(&arr)); //6 &arr -- 数组的地址--数组指针 char(*p)[7] = &arr
//	//printf("%d\n", strlen(&arr + 1)); //随机值  &arr -- 数组的地址--数组指针 char(*p)[7] = &arr &arr+1--跳过一个数组
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//字符指针
//	char* p = "abcdef"; //指针p中保存着字符串常量首元素的地址
//	//printf("%d\n", sizeof(p)); //指针变量p的大小
//	//printf("%d\n", sizeof(p + 1)); //p+1 是字符b的地址
//	//printf("%d\n", sizeof(*p)); //1  *p是字符串的第一个字符'a'
//	//printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0] == *(arr+0) p[0] == *(p+0) == 'a'
//	//printf("%d\n", sizeof(&p)); //4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//
//	//printf("%d\n", strlen(p));
//	//printf("%d\n", strlen(p + 1));
//	//printf("%d\n", strlen(*p)); //err
//	//printf("%d\n", strlen(p[0])); //err
//	//printf("%d\n", strlen(&p));
//	//printf("%d\n", strlen(&p + 1));
//	//printf("%d\n", strlen(&p[0] + 1));
//
//
//	//二维数组
//	int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a)); //48
//	//printf("%d\n", sizeof(a[0][0]));//4
//	//printf("%d\n", sizeof(a[0])); //16  a[0]相当于第一行作为一维数组的数组名,
//	//                              //sizeof(arr[0])把数组名单独放在sizeof()内,计算的是第一行的大小
//	//printf("%d\n", sizeof(a[0] + 1));//4  a[0]是第一行的数组名,数组名此时是首元素的地址,a[0]其实是第一行第一个元素的地址
//	//                                 //所以 a[0]+1 就是第一行第二个元素的地址,
//	//printf("%d\n", sizeof(*(a[0] + 1)));//4
//	//printf("%d\n", sizeof(a + 1));//4  a是二维数组的数组名,没有sizeof(数组名),也没有&(数组名),所以a是首元素地址
//	//                              //而把二维数组看成一维数组,二维数组的首元素是他的第一行,a就是第一行(首元素)的地址
//	//                              //a+1就是第二行的地址
//	//printf("%d\n", sizeof(*(a + 1)));//16 sizeof(a[1])计算的是第二行的大小,单位是字节
//	//printf("%d\n", sizeof(&a[0] + 1));//4 第二行的地址
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 第二行的大小,单位是字节
//	//printf("%d\n", sizeof(*a));//16  a是首元素地址--第一行地址,*a就是第一行,sizeof(*a)就是计算第一行的大小
//	//printf("%d\n", sizeof(a[3]));//16 sizeof()中的表达式不会参与真实计算
//	return 0;
//}
