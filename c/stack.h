/*******************************************************************************
 *
 * File: stack header file.
 * date: 
 * author: Or Asraf
 * reviewer: 
 *
 ******************************************************************************/
 
#ifndef __STACK_H__
#define __STACK_H__

#include <stddef.h> /* size_t */


typedef struct stack stack_ty;

/* create the stack struct.
 * NOTICE: this function using malloc and returns NULL if Allocation failed! 
 * complexity: O(1) 
 */
stack_ty *StackCreate(size_t capacity);

/* free the stack struct
 * complexity: O(1) 
 */
void StackDestroy(stack_ty *stack);

/* insert 'element' to the stack
 * NOTICE: if the stack is full the behaviour is undefined.
 * complexity: O(1)
 */
void StackPush(stack_ty *stack, void *element);

/* eject latest pushed 'element' from the stack
 * NOTICE: if the stack is empty the behaviour is undefined.
 * complexity: O(1)
 */
void StackPop(stack_ty *stack);

/* return the top element on the stack. 
 * NOTICE: if stack is Empty the behaviour is undefined 
 * complexity: O(1)
 */
void *StackPeek(const stack_ty *stack);

/* return the current size of the stack
 * complexity: O(1)
 */
size_t StackSize(stack_ty *stack);

/* return the total capacity of the stack 
 * complexity: O(1) 
 */
size_t StackCapacity(const stack_ty *stack);

/* return 1 if the stack is empty, 0 otherwise 
 * complexity: O(1) 
 */
int StackIsEmpty(const stack_ty *stack);


#endif /* __STACK_H__ */ 
 
