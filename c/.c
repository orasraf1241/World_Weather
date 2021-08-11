/*******************************************************************************
 *
 * File:  .C file.
 * Description: 
 * date: 11/08/21
 * author: Dor Knafo
 * reviewer: 
 *
 ******************************************************************************/
 
#include ".h"
 
#include<stdio.h> 
#include<stdlib.h>

int *copyArray(int *array,int size);
void printAddresType();

int main()
{
    int i=0;
    int array[5] = {1,2,3,4,5};
    int *newArray=copyArray(array,5);
    for (i = 0; i < 5; i++) 
    {
        printf(" %d ",newArray[i]);   
    }
    //printAddresType();

    return 0;
}

void swap(int *a,int *b)
{
	int *temp =*a;
	*a = *b;
	*b = *temp;
	assert(*a);
	assert(*b);
}	

void swatSize_t(size_t *a ,size_t *b )
{

	size_t temp = sizeof(a);
	
}

int *copyArray(const int *array,int size)
{
	int i=0;
        int *newArray = (int *)malloc(size*sizeof(int) );
        assert(newArray);
        for(i=0 ;i< size; i ++)
        {
                newArray[i]=array[i];
        }
        return newArray;
}  
/*
void printAddresType()
{
	int i=7;
	int *ptr = &i;
	int *ptr2 = (int *)malloc(sizeof(int));
	char cd = 67;
	
	printf("int type address:%d \n ptr type :%d \n char type :%c \narray address 			%d",i,ptr,cd,ptr2);
	free(ptr2);
	ptr2=NULL;
}
*/
