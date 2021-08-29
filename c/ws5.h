/*******************************************************************************
 *
 * File: .c Header file.
 *
 * date: 15/08/21
 * author:Or Asraf
 * reviewer:
 *
 ******************************************************************************/



#ifndef _WS4_H_
#define _WS4_H_

#include<stdio.h>

enum error_handler{  SUCCESSFULLY = 0,
            CANNOT_OPEN_THE_FILE = 1,
            CANNOT_DELETE_FILE = 2
        };

typedef struct print_me
{
    int value;
    void (*Print)(int x);

} print_me;


/*this FUNC open file and write to the file line by line
 * we hava 3 speciel flag
 * 1. -remove this fumcs delete the file for pc  -->RemoveFile
 * 2. -exit this funcs close the program
 * 3. -count this guncs count the number of lines in the file --> LinesCounter
 * 4. Operator '<' this operator go to begining of the file and the first line */
enum error_handler  WriteFiles(const char *filename);

void PrintStructs();




#endif
