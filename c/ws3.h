/*******************************************************************************
 *
 * File: .c Header file.
 *
 * date: 15/08/21
 * author:Or Asraf
 * reviewer:
 *
 ******************************************************************************/



#ifndef _HEADERFILE_H_
#define _HEADERFILE_H_
#include<stdlib.h>

/*this funcs check how whach pointer to pointer in this array */
int CheckSize(char **text);

/* This funcs take alll the enviorment var and save aim in new multi
    This funcs take alll the enviorment var and save aim in new multi array
 * with lower words
 * ###DONT FORGET TO FREE THE MEMORY AFTER USING */
int EnviormaenLow(char * envp[]);


int Josuef(int n);

/* free all the data we are alocated */
void FreeEnv(char **env);


#endif


