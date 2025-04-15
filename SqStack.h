#ifndef SQSTACK_H
#define SQSTACK_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef int Elemtype_t;
typedef struct SqStack
{
    unsigned int Size;
	int Top;
    Elemtype_t *Bottom;
}SqStack_t;

/**
  * @function name: SqStack_Creat
  * @brief        : Create a sequential stack and initialize its management structure
  * @param        : 
  *                 @size The capacity of the stack (number of elements)
  * @retval       : SqStack_t* Returns a pointer to the created stack manager
  * @version      : 1.0
  * @note         : Dynamically allocates memory; the caller should free it when done
*/
SqStack_t *SqStack_Creat(unsigned int size);

/**
  * @function name: SeqStack_IsFull
  * @brief        : Check whether the stack is full
  * @param        : 
  *                 @Manager Pointer to the stack manager
  * @retval       : true if the stack is full, false otherwise
  * @version      : 1.0
  * @note         : Used before pushing to prevent overflow
*/
bool SeqStack_IsFull(SqStack_t *Manager);

/**
  * @function name: SqStack_Push
  * @brief        : Push an element onto the top of the stack
  * @param        : 
  *                 @Manager Pointer to the stack manager
  *                 @data    Data to be pushed
  * @retval       : true if the operation is successful, false if the stack is full
  * @version      : 1.0
  * @note         : Increments the top index before assignment
*/
bool SqStack_Push(SqStack_t *Manager,Elemtype_t data);

/**
  * @function name: SqStack_IsEmpty
  * @brief        : Check whether the stack is empty
  * @param        : 
  *                 @Manager Pointer to the stack manager
  * @retval       : true if the stack is empty, false otherwise
  * @version      : 1.0
  * @note         : Used before popping to avoid underflow
*/
bool SqStack_IsEmpty(SqStack_t *Manager);

/**
  * @function name: SqStack_Pop
  * @brief        : Pop the top element from the stack
  * @param        : 
  *                 @Manager Pointer to the stack manager
  * @retval       : The value of the popped element
  * @version      : 1.0
  * @note         : If the stack is empty, returns 0 (can be handled differently)
*/
Elemtype_t SqStack_Pop(SqStack_t *Manager);

/**
  * @function name: SqStack_Traverse
  * @brief        : Print all elements in the stack from bottom to top
  * @param        : 
  *                 @Manager Pointer to the stack manager
  * @retval       : void
  * @version      : 1.0
  * @note         : Outputs each element separated by a space
*/
void SqStack_Traverse(SqStack_t *Manager);



#endif