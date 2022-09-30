#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void TestSeqList1()
{
    SL sl;
    SeqLisInit(&sl);
    SeqListPushBack(&sl, 1);
    SeqListPushBack(&sl, 2);
    SeqListPushBack(&sl, 3);
    SeqListPushBack(&sl, 4);
    SeqListPushBack(&sl, 5);
    SeqListPushBack(&sl, 6);
    SeqListPrintf(&sl);
    SeqListPopBack(&sl);
    SeqListPrintf(&sl);
    SeqListDestory(&sl);
}
int main()
{
    TestSeqList1();
    return 0;
}