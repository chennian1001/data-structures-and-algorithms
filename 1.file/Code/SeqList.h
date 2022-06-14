#pragma once
#define N 1000
typedef int SLDataType;

//静态顺序表
typedef struct SeqList
{
    SLDataType a[N];
    int size;
}SL;

//接口函数
void SeqListInit(SL* ps,SLDataType x);
void SeqListPushBack(SL* ps,SLDataType x);
void SeqListPopBack(SL* ps,SLDataType x);
void SeqListPushFront(SL* ps,SLDataType x);
void SeqListPopFront(SL* ps,SLDataType x);
//...
