#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>

//#define SLDataType int
typedef int SLDataType;
#define N 100
#define DEFAULT_MALLOC 5


//��̬˳���
typedef struct SeqList
{
    SLDataType* data;//��̬�洢����
    int size;    // ��ʾ�����д洢�˶��ٸ�����
    int capacity;//����ʵ���ܴ����ݵĿռ�������С
} SL;

//�ӿں��� -- ����������STL��
//��̬�ص�:������˾ͽ�ֹ���� ȱ��:˳���Ĵ�С����ȷ��

//��ʼ����������
void SeqLisInit(SL* ps);

//��ӡ��������
void SeqListPrintf(const SL* ps);

//β�庯��ʵ������
void SeqListPushBack(SL* ps, SLDataType x);

//���ٺ�������
void SeqListDestory(SL* ps);

void SeqListPushFront(SL* ps, SLDataType x);

//βɾ��������
void SeqListPopBack(SL* ps);

void SeqListPopFront(SL* ps);
