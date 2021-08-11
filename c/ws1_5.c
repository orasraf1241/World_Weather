#include<stdio.h> 
#include<stdlib.h>
#include".h"
#include <assert.h>


int *copyArray(int *array,int size);
void printAddresType();
int strlen(char *str);
int strcmp(char *str1,char *str2);
void main()
{
    int i=0;
    int array[5] = {1,2,3,4,5};
    int *newArray=copyArray(array,5);
    for (i = 0; i < 5; i++) 
    {
        printf(" %d ",newArray[i]);   
    }
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

int strlen(const char *str)
{
	int size=0;
	while(str[size]=='\0')
	{
		size++;
	}
	return size;
}



//chaceck if 2 string equales
int Strcmp(const char *str1,const char *str2)
{
	int size = strlen(str1);
	int i = 0;
	assert(strlen(str1) == strlen(str2));	
	for ( i = 0; i < size; ++i)
	{
		assert(*(str1 + i)== *(str2 + i));
	}
	return 1;
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
