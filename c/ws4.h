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


typedef struct print_me
{
    int value;
    void(*PrimtMe)(int x);
} print_me;

void PrintMe(int x)
{
    printf("%d ",x);
}

void PrintStructs();




#endif
