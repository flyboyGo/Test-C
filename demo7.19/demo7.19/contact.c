#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
#include <memory.h>
#include <string.h>

//实现函数
//实现初始化函数
void InitContact(struct Contact* pc)
{
    memset(pc->data, 0, sizeof(pc->data));
    pc->size = 0; //设置通讯录最初只有0个元素
}

//添加函数实现
void AddContact(struct Contact* pc)
{
    if (pc->size == MAX)
    {
        printf("通讯录已满,无法增加!");
    }
    else
    {
        printf("请输入姓名:>");
        scanf("%s", pc->data[pc->size].name);
        printf("请输入年龄:>");
        scanf("%d", &(pc->data[pc->size].age));
        printf("请输入性别:>");
        scanf("%s", pc->data[pc->size].sex);
        printf("请输入电话:>");
        scanf("%s", pc->data[pc->size].tele);
        printf("请输入地址:>");
        scanf("%s", pc->data[pc->size].addr);

        pc->size++;
        printf("添加成功!\n");
    }
}

//封装查找函数,添加static改变函数的作用域,只在本文件中起作用
//static修饰全局变量,改变全局变量的作用域,只在本文件中起作用
//static修饰局部变量,改变局部变量的生命周期,直到整个项目结束
static int FindByName(const struct Contact* pc, char name[MAX_NAME])
{
    int i = 0;
    for (i = 0; i < pc->size; i++)
    {
        if (0 == strcmp(pc->data[i].name, name))
        {
            return i;
        }
    }
    return -1;
}

//封装计算结构体struct PeoInfo 定义的变量所占空间的大小
static int SizeStructPerInfo()
{
    return sizeof(struct PeoInfo);
}

//删除函数实现
void DelContact(struct Contact* pc)
{
    char name[MAX_NAME];
    printf("请输入要删除人的姓名:>");
    scanf("%s", name);
    //1、查找要删除人的位置
    //找到返回姓名指定的下标,找不到返回-1
    int pos = FindByName(pc, name);

    //2、删除
    if (pos == -1)
    {
        printf("未找到指定姓名!");
    }
    else
    {
        //删除数据
        /*int j = 0;
        for (j = pos; j < pc->size - 1; j++)
        {
            pc->data[j] = pc->data[j + 1];
        }*/

        memmove(&(pc->data[pos]), &(pc->data[pos + 1]), (pc->size - pos - 1) * SizeStructPerInfo());

        pc->size--;
        printf("删除成功!\n");
    }
}

//查找函数实现
void SearchContact(const struct Contact* pc)
{
    char name[MAX_NAME];
    printf("请输入要查找人的姓名:>");
    scanf("%s", name);
    int pos = FindByName(pc, name);
    if (pos == -1)
    {
        printf("查找的人不存在!");
    }
    else
    {
        printf("%-5s\t %-11s\t %-5s\t %-5s\t %-20s\n", "姓名", "电话", "性别", "年龄", "地址");
        printf("%-5s\t %-11s\t %-5s\t %-5d\t %-20s\n",
            pc->data[pos].name,
            pc->data[pos].tele,
            pc->data[pos].sex,
            pc->data[pos].age,
            pc->data[pos].addr);
    }
}

//修改函数实现
void ModifyContact(const struct Contact* pc)
{
    char name[MAX_NAME];
    printf("请输入要修改人的姓名:>");
    scanf("%s", name);
    int pos = FindByName(pc, name);
    if (pos == -1)
    {
        printf("需改的人姓名不存在!\n");
    }
    else
    {
        printf("请输入姓名:>");
        scanf("%s", pc->data[pos].name);
        printf("请输入年龄:>");
        scanf("%d", &(pc->data[pos].age));
        printf("请输入性别:>");
        scanf("%s", pc->data[pos].sex);
        printf("请输入电话:>");
        scanf("%s", pc->data[pos].tele);
        printf("请输入地址:>");
        scanf("%s", pc->data[pos].addr);

        printf("修改成功!\n");
    }
}

//封装交换函数,添加static改变函数的作用域,只在本文件中起作用
static void SwapData(struct PeoInfo* pp, struct PeoInfo* pp2)
{
    struct PeoInfo tmp;

    tmp.age = pp->age;
    strcpy(tmp.name, pp->name);
    strcpy(tmp.addr, pp->addr);
    strcpy(tmp.sex, pp->sex);
    strcpy(tmp.tele, pp->tele);

    strcpy(pp->name, pp2->name);
    strcpy(pp->addr, pp->addr);
    strcpy(pp->sex, pp->sex);
    strcpy(pp->tele, pp->tele);
    pp->age = pp2->age;

    strcpy(pp2->name, tmp.name);
    strcpy(pp2->addr, tmp.addr);
    strcpy(pp2->sex, tmp.sex);
    strcpy(pp2->tele, tmp.tele);
    pp2->age = tmp.age;

}
//排序函数实现,按照姓名作为排序的标准
void SortContact(struct Contact* pc)
{
    int i = 0;
    for (i = 0; i < pc->size - 1; i++)
    {
        int j = 0;
        for (j = 0; j < pc->size - 1 - i; j++)
        {
            if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
            {
                SwapData(&(pc->data[j]), &(pc->data[j + 1]));
            }
        }
    }
    printf("排序成功!\n");
}

//打印函数实现
void ShowContact(const struct Contact* pc)
{
    if (pc->size == 0)
    {
        printf("通讯录为空!\n");
    }
    else
    {
        int i = 0;
        printf("%-5s\t %-11s\t %-5s\t %-5s\t %-20s\n",
            "姓名", "电话", "性别", "年龄", "地址");
        for (i = 0; i < pc->size; i++)
        {
            printf("%-5s\t %-11s\t %-5s\t %-5d\t %-20s\n",
                pc->data[i].name,
                pc->data[i].tele,
                pc->data[i].sex,
                pc->data[i].age,
                pc->data[i].addr);
        }
    }
}