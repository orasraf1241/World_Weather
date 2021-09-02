/****************************************************************************
 * File Name: stack_.c													*
 * Author: Or Asraf													*
 * Date:25.08.21																*
 * Reviewer:omri 																*
 ****************************************************************************/

#include<stdlib.h> /* malloc free */
#include<assert.h> /* using assert */

#include "stack.h"



struct stack
   {
    size_t capacity;
    size_t top;
    void **elements;
};

/* it this funcs we are create the stack and inistall all the data*/
stack_ty *StackCreate(size_t capacity)
{
    stack_ty  NULL;
    size_t i = 0;
    
    stack = (stack_ty*)malloc(sizeof(stack_ty));

    if(stack)
    {
        stack->elements = (void **)malloc(sizeof(void*) * capacity);
        stack->top = 0;
        stack->capacity = capacity;
        if(stack->elements)
    }

    for (; i < capacity; i++)
    {
        stack->elements[i] = NULL;
        if(stack->elements[i] ==)
    }

    return (stack);
     
}


void StackDestroy(stack_ty *stack)
{
    size_t i = 0;
    size_t size = stack->capacity;


    free(stack->elements);
    stack->elements = NULL;

    free(stack);
    stack = NULL;   
}


void StackPush(stack_ty *stack, void *element)
{
    assert( (stack) && (element) );
    if(stack->top+1 < capacity)
    {
        stack->top += 1 ;
        stack->elements[stack->top] = element;  
    }
    
}


void StackPop(stack_ty *stack)
{
    assert(stack);

    stack->elements[stack->top] =NULL;
    stack->top--;
}


void *StackPeek(const stack_ty *stack)
{
    return (stack->elements[stack->top -1]);
}


size_t StackSize(stack_ty *stack)
{
    return (stack->top);
}


size_t StackCapacity(const stack_ty *stack)
{
   return (stack->capacity);

}


int StackIsEmpty(const stack_ty *stack)
{
    if( (int)stack->top != 0)
    {
        return 0;
    }
    return 1;
}
