#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//描述一个学生，一些数据
//名字
//年龄
//电话
//性别

//struct 结构体关键字   Stu--结构体标签 struct Stu--结构体类型
//方式一
struct Stu // struct Stu是结构体类型,也是一种类型,像int类型一样,在未定义变量s之前,如同int不占据内存空间
{
    //成员变量
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}s1, s2, s3; //s1,s2,s3是三个全局的结构体变量

//方式二
typedef struct StuPlus //typedef 重命名 将 stuct StuPlus 重新命名为Stu
{
    //成员变量
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;

//在C语言中，枚举类型、字符型和各种整数的表示形式统一叫做标量类型。
//当在C表达式中使用标量类型的值时，编译器就会自动将这些标识符转换为整数保存。
//这种机制的作用是，在这些标量类型上执行的操作与整型上执行的操作完全一样

struct S
{
    int a;
    char c;
    char arr[20];
    double d;
};

//结构体嵌套结构体
struct T
{
    char ch[10];
    struct S s;
    int* pa;
};
 //int main(void) 
 //{
 //    //初始化：定义变量的同时赋初值
 //    struct Stu s1; //创建局部结构体变量s
 //    Stu s2; //创建局部结构体变量s2
 //    Stu s3 = {"李鹏飞", 23, "13218070379", "男"}; //创建局部结构体变量s3
 //    struct Stu s4 = {"flyboy", 24, "15061644139", "女"}; //创建局部结构体变量s4
 //    //复杂结构体
 //    int a = 20;
 //    struct T t = {"hello", {23, 'a', "world", 3.0}, &a};
 //    printf("%s\n", t.ch);
 //    printf("%s\n", t.s.arr);
 //    printf("%c\n", t.s.c);;
 //    printf("%.3lf\n", t.s.d);
 //    printf("%d\n", *(t.pa));
 //    return 0;
 //}

//结构体传参数
//传值
void Print(Stu s)
{
    printf("%s ", s.name);
    printf("%d ", s.age);
    printf("%s ", s.tele);
    printf("%s ", s.sex);
    printf("\n");
}
//传指针
void Print2(Stu* s)
{
    printf("%s ", (*s).name);
    printf("%d ", s->age);
    printf("%s ", s->tele);
    printf("%s ", s->sex);
}
int main()
{
    Stu s = { "angle", 999, "12345678910", "女" };
    //打印结构体参数(传值、传参数)
    Print(s);
    Print2(&s);
    return 0;
}