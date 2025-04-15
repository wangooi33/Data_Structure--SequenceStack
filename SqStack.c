/**
  * @file name: SqStack.c
  * @brief    : Implementation of a sequential stack (SqStack) using dynamic memory
  *             Includes creation, push, pop, traversal, and status check operations.
  * @author   : i33akq@163.com
  * @date     : 2025/04/13
  * @version  : 1.0
  * @note     : This file is part of the stack module using sequential storage.
  * @CopyRight (C)   2024-2025   i33akq@163.com   ALL Right Reserved
*/

#include "SqStack.h"

SqStack_t *SqStack_Creat(unsigned int size){
    //1.利用calloc为顺序栈的管理结构体申请一块堆内存
    SqStack_t *Manager=(SqStack_t *)calloc(1,sizeof(SqStack_t));
    if(NULL == Manager)
	{
		perror("calloc memory for manager is failed");
		exit(-1);
	}

    //2.利用calloc为所有元素申请堆内存
	Manager->Bottom = (Elemtype_t*)calloc(size,sizeof(Elemtype_t));
	if (NULL == Manager->Bottom)
	{
		perror("calloc memory for element is failed");
		free(Manager);
		exit(-1);
    }

    Manager->Size=size;
	Manager->Top = -1;
    return Manager;
}


bool SeqStack_IsFull(SqStack_t *Manager){
	return (Manager->Top + 1 == Manager->Size) ? true : false;
}
bool SqStack_Push(SqStack_t *Manager,Elemtype_t data){
    if ( SeqStack_IsFull(Manager) )
	{
		printf("SeqStack is Full!\n");
		return false;
	}

    //++Manager->Top：栈顶指针先加 1，然后再赋值。
    //Manager->Bottom[...]：Bottom 是一个数组，表示顺序栈的存储空间。
    Manager->Bottom[++Manager->Top] = data;

	return true;
}

bool SqStack_IsEmpty(SqStack_t *Manager){
    return (-1 == Manager->Top) ? true : false;
}
Elemtype_t SqStack_Pop(SqStack_t *Manager){
    if ( SqStack_IsEmpty(Manager) )
	{
		printf("SeqStack is Empty!\n");
		return false;
	}
    
    Elemtype_t temp=0;//存储出栈元素的值
	temp = Manager->Bottom[Manager->Top--];
    return temp;
}

void SqStack_Traverse(SqStack_t *Manager){
    if ( SqStack_IsEmpty(Manager) )
	{
		printf("SeqStack is Empty!\n");
		return ;
	}
	for(int i=0;i<=Manager->Top;i++){
		printf("%d ",Manager->Bottom[i]);
	}

}
