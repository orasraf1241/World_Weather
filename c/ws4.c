/*******************************************************************************
 *
 * File: .c Header file.
 *
 * date: 15/08/21
 * author:Or Asraf
 * reviewer:
 *
 ******************************************************************************/



#include<stdio.h>

#include "ws4.h"


void get_a (int  a)
{
    printf ("%d ",a);
}

void PrintStructs()
{
    int i=0;
    print_me my_structs[10];

    /* Initiation all the arrat of struckts */
    for ( i = 0; i < 10; ++i)
    {
        my_structs[i].value = i;
    }

    /* Callint to the func in the staructs */
    for ()
    for ( i = 0; i < 10; ++i)
    {
        my_structs[i].PrimtMe = get_a;
        my_structs[i].PrimtMe(my_structs[i].value);
    }
    printf("\n");

}