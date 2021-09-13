/********************************************************************                                             
 * File Name: vector.h                            
 * Description:                                           
 * Author:Or Asraf                            
 * Reviewer:                                      
 * Date:28.08.21                                       
 ********************************************************************/  
#include <stdio.h>
#include <stdlib.h>

#ifndef __VECTOR_H_
#define  __VECTOR_H_

typedef struct vector vector_t;



/*Create vector object, test for successfull allocation O(1)*/
vector_t *VectorCreate(size_t capacity);

 
 
/*add an element to the vector
return
if reallocation happenes O 
if not return FAIL_TO_ALLOCATE*/
int VectorAppend(vector_t *v, void *element);


/* This func insert the element to vector in the index the user*/
int VectorSet(const vector_t *v, size_t index, void *element);

/* Return the value of the element in the provided index*/
void *VectorGet(const vector_t *v, size_t index);

/*Remove the last element in the vector*/
void VectorPop(vector_t *v);

/* return vector size */
size_t VectorSize(const vector_t *v);

/* return vector capacity */
size_t VectorCapacity(const vector_t *v);

/*O(1)*/
void VectorDestroy(vector_t *v);



#endif /*__VECTOR_H__*/


