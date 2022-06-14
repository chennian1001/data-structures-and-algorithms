# list

## 1. 线性表  

> 线性表是n个具有相同特性的数据元素的有限序列。线性表是一种在实际中广泛使用的数据结构，常见的线性表：顺序表，链表，栈，队列，字符串...  
> 线性表在逻辑上是线性结构，也就说是连续的一条直线。但是在物理结构上不一定是连续的，线性表在物理上存储时，通常以数组和链式结构的形式存储  
![线性表的结构](./imp/linear%20list.png)  
---

## 2. 顺序表

### 2.1概念及结构

> 顺序表使用一段**物理地址连续**的存储单元依次存储数据元素的线性结，一般情况下采用数组存储。在数组上完成数据的增删查改[^注]
>
> [^注]: 顺序表就是数组，但是在数组的基础上，它还要求数据是从头开始存连续存储的不能跳跃间隔
