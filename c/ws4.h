/*******************************************************************************
 *
 * File: .c Header file.
 *
 * date: 15/08/21
 * author:Or Asraf
 * reviewer:
 *
 ******************************************************************************/



#ifndef C_WS4_H
#define C_WS4_H

#include<stdio.h>

typedef struct print_me
{
    int value;

    void (*Print)(int x);

} print_me;


void PrintStructs();




#endif
