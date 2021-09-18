#ifndef __VECTOR_H__
#define __VECTOR_H__

#include<stdlib.h>
#include <assert.h> /* assert */


typedef struct vector vector_t;


enum error_handler
{  SUCCESSFULLY = 0,
   ERROR_ALLOCATION = 1,
   BIG_INDEX = 2
        };

/*O(1)*/
vector_t *VectorCreate(size_t capacity);

 /*
 /*O(1) , if reallocation happenes O(n)*/
int VectorAppend(vector_t *v, void *element);


/*O(1) this func insert the element to vector in the index the user*/
int VectorSet(vector_t *v, size_t index, void *element);

/*O(1)*/
void *VectorGet(vector_t *v, size_t index);

/*O(1)*/
void VectorPop(vector_t *v);

/*O(1)*/
size_t VectorSize(vector_t *v);

/*O(1)*/
void VectorDestroy(vector_t *v);

/*O(1)*/
size_t VectorCapacity(const vector_t *v);

void VectorHalfCapacity(vector_t *v);



#endif /*__VECTOR_H__*/
