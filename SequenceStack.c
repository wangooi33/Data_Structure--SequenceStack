/**
  * @file name: SequenceStack.c
  * @brief    : Functional test 
  * @author   : i33akq@163.com
  * @date     : 2025/04/13
  * @version  : 1.0
  * @note     : none
  * @CopyRight (C)   2024-2025   i33akq@163.com   ALL Right Reserved
*/

#include "SqStack.h"
int main()
{
    SqStack_t *stack=SqStack_Creat(12);
    SqStack_Push(stack,1);
    SqStack_Push(stack,2);
    SqStack_Push(stack,3);
    SqStack_Traverse(stack);

    printf("\n");

    SqStack_Pop(stack);
    SqStack_Traverse(stack);

    return 0;
}