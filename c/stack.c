#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>
#include<assert.h>

#include "ws8.h"



struct stack
   {
    size_t capacity;
    size_t top;
    void **elements;
};

/* it this funcs we are create the stack and inistall all the data*/
stack_ty *StackCreate(size_t capacity)
{
    stack_ty  *stack;
    size_t i = 0;
    
    if(capacity < 0)
    {
        return NULL;
    }
    stack = (stack_ty*)malloc(sizeof(stack_ty));

    if(stack)
    {
        stack->elements = (void **)malloc(sizeof(void*) * capacity);
        stack->top = 0;
        stack->capacity = capacity;
    }
    for (; i < capacity; i++)
    {
        stack->elements[i] = NULL;
    }

    return stack;
     
}


void StackDestroy(stack_ty *stack)
{
    size_t i = 0;
    size_t size = stack->capacity;


    for (; i < size ; i++)
    {
        free(stack->elements[i]);
        stack->elements[i]=NULL;
    }
    free(stack->elements);
    stack->elements = NULL;

    free(stack);
    stack = NULL;   
}


void StackPush(stack_ty *stack, void *element)
{
    assert( (stack) && (element) );

    stack->top += 1 ;
    stack->elements[stack->top] = element;  
}


void StackPop(stack_ty *stack)
{
    assert(stack);

    stack->elements[stack->top] =NULL;
    stack->top--;
}


void *StackPeek(const stack_ty *stack)
{
    return (stack->elements[stack->top]);
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
