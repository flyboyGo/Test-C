#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>

//#define SLDataType int
typedef int SLDataType;
#define N 100
#define DEFAULT_MALLOC 5


//静态顺序表
typedef struct SeqList
{
    SLDataType* data;//动态存储数据
    int size;    // 表示数组中存储了多少个数据
    int capacity;//数组实际能存数据的空间容量大小
} SL;

//接口函数 -- 命名风格跟着STL走
//静态特点:如果满了就禁止插入 缺点:顺序表的大小不好确定

//初始化函数声明
void SeqLisInit(SL* ps);

//打印函数声明
void SeqListPrintf(const SL* ps);

//尾插函数实现声明
void SeqListPushBack(SL* ps, SLDataType x);

//销毁函数声明
void SeqListDestory(SL* ps);

void SeqListPushFront(SL* ps, SLDataType x);

//尾删函数声明
void SeqListPopBack(SL* ps);

void SeqListPopFront(SL* ps);
