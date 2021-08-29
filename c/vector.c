#include<stdlib.h>
#include<stdio.h>

#include "vector.h"
#define MULTIPLICATION 2


struct vector {
void **array;
size_t size;
size_t capacity;
};


/*O(1)*/
vector_t *VectorCreate(size_t capacity)
{
    vector_t *vector;
    size_t i = 0;
    
    vector = (vector_t*)malloc(sizeof(vector_t));

    if(vector)
    {
        vector->array = (void **)malloc(sizeof(void*) * capacity);
        vector->size = 0;
        vector->capacity = capacity;
    }
    for (; i < capacity; i++)
    {
        vector->array[i] = NULL;
    }
    return vector;
}

 /*
 /*O(1) , if reallocation happenes O(n)*/
int VectorAppend(vector_t *v, void *element)
{
    if(v->size+1 == v->capacity)
    {
        v = realloc(v, v->capacity * MULTIPLICATION);
    }
    if(v == NULL)
    {
        perror("Error (re)allocating memory");
        return ERROR_ALLOCATION;
    }
    v->array[v->size] = element;
    v->size++;
    return SUCCESSFULLY;

}


/*O(1) this func insert the element to vector in the index the user*/
int VectorSet(vector_t *v, size_t index, void *element)
{
    if(index > v->size)
    {
        return BIG_INDEX;
    }
    else
    {
        v->array[index] = element;
    }
    return SUCCESSFULLY;
}

/*O(1)*/
void *VectorGet(vector_t *v, size_t index)
{
    return v->array[index];
}

/*O(1)*/
void VectorPop(vector_t *v)
{
    v->array[v->size] = NULL;
    v->size--;
}

/*O(1)*/
size_t VectorSize(vector_t *v)
{
    return v->size;
}

size_t VectorCapacity(const vector_t *v)
{
    return v->capacity;
}

void VectorDestroy(vector_t *v)
{
    size_t i = 0;
    size_t size = v->capacity;


    for (; i < size ; i++)
    {
        free(v->array[i]);
        v->array[i]=NULL;
    }
    free(v->array);
    v->array = NULL;

    free(v);
    v = NULL;   
}

void VectorHalfCapacity(vector_t *v)
{
    assert(v);
    


}