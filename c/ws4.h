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

enum week{SUCCESSFULLY = 0, CANNOT_OPEN_THE_FILE = 1, CANNOT_DELETE_FILE = 2, Thur, Fri, Sat, Sun};

typedef struct print_me
{
    int value;
    void (*Print)(int x);

} print_me;


/*this file open file and write to the file line by line
 * we hava 3 speciel flag
 * 1. -remove this fumcs delete the file for pc
 * 2. -exit this funcs close the program
 * 3. -count this guncs count the number of lines in the file
 * 4. Operator '<' this operator go to begining of the file and the first line */
int WriteFiles();

int RemoveFile(char *filename);

int LinesCounter(char *filename);


void PrintStructs();




#endif
