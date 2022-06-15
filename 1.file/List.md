# list

## **1. 线性表的基本概念**

### **1.1 线性表的定义**

> *线性表是n个具有相同特性的数据元素的有限序列。线性表是一种在实际中广泛使用的数据结构，常见的线性表：顺序表，链表，栈，队列，字符串...*  
> *线性表在逻辑上是线性结构，也就说是连续的一条直线。但是在物理结构上不一定是连续的，线性表在物理上存储时，通常以数组和链式结构的形式存储*  

> **线性表的定义有以下要点:**  
    1. 序列——顺序性  
    2. 有限——有限性
    3. 相同类型——相同性
    4. 元素不确定性——抽象性
    5. 线性表的逻辑特性。元素之间的前驱后继关系

#### 1.2 线性表的抽象数据类型

    ADT List{
            Data:
            线性表中的数据元素具有相同类型，相邻元素具有前驱和后继的关系
            Operation：
             InitList(&L,maxsize,incresize)
                操作结果：创建一个容量为maxsize的空线性表。
             ClearList(&L)
                初始条件：线性表L已存在
                操作结果：清空线性表L
             ListEmpty(L)
                初始条件：线性表L已存在
                操作结果：若L为空表，则返回true;否则返回false
             ListLength(L)
                初始条件：线性表L已存在
                操作结果：返回线性表L中元素个数，即线性表L长度
             LocateElem(L,e)
                初始条件：线性表L已存在
                操作结果：返回L中第一个值与e相等的元素位序，若这样的值不存在则返回0
             PriorElem(L,cur_e,&pre_e)
                初始条件：线性表L已存在
                操作结果：若cur_e是L的元素，但不是第一个，则用pre_e返回它的前驱，或者操作失败，pre_e无意义
             NextElem(L,cur_e,&next_e)
                初始条件：线性表L已存在
                操作结果：若cur_e是L的元素，但不是最后一个，则用next_e返回它的后继，否则操作失败，next_e无意义
             ListInsert(&L,i,e)
                初始条件：线性表L已存在，1<=i<=LengthList(L)
                操作结果：在L的第i个元素之前插入新的元素e，L长度增1
             ListDelete(&L,i,&e)
                初始条件：线性表L已存在，1<=i<=LengthList(L)
                操作结果：删除L的第i个元素，并用e返回其值，L的长度减1
             GetElem(L,i,&e)
                初始条件：线性表L已存在，1<=i<=LengthList(L)
                操作结果：用e返回L中的第i个值
             ListTraverse(L)
                初始条件：线性表L已存在，1<=i<=LengthList(L)
                操作结果：依次输出L中的每个数据
             DestroyList(&L)
                初始条件：线性表L已存在
                操作结果：撤销线性表L
    }ADT List

---

## 2. 线性表的顺序存储和基本操作

>在计算机内可以用不同的方式来存储线性表，其中最常用的方式有顺序存储(Sequential list)和链式存储(linked list)两种

### 2.1线性表的顺序存储 --- 顺序表

>在计算机中表示线性表最简单的方法是用一段地址连续的存储单元依次存储线性表中的各个元素，称线性表的这种存储方式为线性表的顺序存储结构，相应的，把采用这种结构的线性表成为顺序表

#### 1.静态存储分配的顺序表

```C

#define List_Init_Size 100
typedef struct SqeList
{
    int elem[List_Init_Size];
    int length;
}SL;

```

#### 2. 动态存储分配的顺序表

```C

typedef struct SeqList
{
    int* elem;          //存储数据元素的一维数组首地址
    int length;         //线性表当前长度
    int listsize;       //当前分配的数组容量
    int incrementsize;  //增补空间量
}

```
