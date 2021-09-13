/*************************************************************
*   Author: Or Asraf
*   Decription: vector
*   Reviewd by: 
*   File name: vector.c
**************************************************************/

#include <stddef.h> /* size_t */
#include <stdlib.h> /* malloc, free */
#include "vector.h"


enum error_handler
{  SUCCESSFULLY = 0,
   ERROR_ALLOCATION = 1,
   BIG_INDEX = 2 
};



 struct vector 
 {
    void **elements;
    size_t size;
    size_t capacity;
};

/*Create vector object, test for successfull allocation
return
initialized vector pointer if succeeded
NULL if failed*/

vector_t *CreateVector(size_t capacity)
{
    vector_t *vector = NULL;
    size_t i = 0;

    vector = (vector_t*)malloc(sizeof(vector_t)); 

    if(!vector)
    {
        return (NULL);
    }

    vector -> elements = (void**)malloc(sizeof(void*) * capacity);
    
    if(!(vector -> elements))
    {
        free(vector);
        vector = NULL;
        return vector;
    }

    for (;i<capacity;i++)
    {
        vector -> elements[i] = NULL;
    }
    vector -> size = 0;
    vector -> capacity = capacity;
    return vector; 
}

/* return vector size */
size_t VectorSize(const vector_t *v)
{
    return v -> size;
}

size_t VectorCapacity(const vector_t *v)
{
    return v -> capacity;
}

int VectorAppend(vector_t *v, void *element)
{
    void **tmp_ptr;
    if ((v -> size + 1) > v -> capacity)
    {
        tmp_ptr = (void**)realloc(v -> elements, sizeof(void*) * 2 * v -> capacity);
        
        if (!(tmp_ptr))
        {
            return ERROR_ALLOCATION;
        }
        else
        {
            v -> elements = tmp_ptr;
            v -> capacity *= 2;
        }

    }
    v -> elements[v -> size] = element;
    v -> size++;
    return SUCCESSFULLY;
}

int VectorSet(const vector_t *v, size_t index, void *element)
{
    if (index > v -> size)
    {
        return BIG_INDEX;
    }
    else
    {
        v -> elements[index] = element;
    }
    return SUCCESSFULLY;
}

void VectorDestroy(vector_t *v)
{
    free(v->elements);
    v -> elements = NULL;
    free(v);
    v = NULL;
}


void *VectorGet(const vector_t *v, size_t index)
{
    if (index >= v -> size)
    {
        return NULL;
    }
    else
    {
        return v -> elements[index];
    }
}

/*Remove the last element in the vector*/
void VectorPop(vector_t *v)
{
    void **tmp = NULL;
    tmp = v -> elements;


    if (v -> size > 0)
    {
        v -> size --;
        v -> elements[v -> size] = NULL;

        if (v -> size < v -> capacity/2)
        {
            v -> capacity /= 2;
            v -> elements = (void**)realloc(v -> elements,sizeof(void*)*v -> capacity);
            if (!v->elements)
            {
                v->elements = tmp;
            }
        }
    }
}




