
/*Written by : Or Asraf [ID - 311391874]
August 2021
Infinity Labs R&D*/

#include<stdlib.h> /*malloc and sizeOf */
#include<string.h> /*strlen */
#include <stdio.h> /*print */
#include <ctype.h> /* using in tolower*/
#include<math.h> /* using pow*/


#include "ws3.h"

void FreeEnv(char **env)
{
    char **cp = env;

    while(*cp)
    {
        free(*cp);
        *cp = NULL;
        cp++;
    }
    free(env);
    env = NULL;
}

int CheckSize(char **text)
{
    int count = 0;

    while(*text)
    {
        text++;
        count++;
    }
    return count;
}
char **EnviormaenLow(char * envp[])
{
    int i=0;
    int j=0 ,size_str = 0;
    char **env;
    int size = CheckSize(envp);

    env = malloc(sizeof(*env) *(size + 1 ));
    if(env == NULL)
    {
        return NULL;
    }
    while (i != size)
    {
        env[i] = malloc(sizeof(char) * (strlen(envp[i])+1) );
        if(env[i]==NULL)
        {
            FreeEnv(env);
            return NULL;
        }
        size_str = strlen(envp[i]);
        for ( j = 0; j < size_str; j++)
        {
            env[i][j]=tolower(envp[i][j]);
        }
         env[i][(j )] = '\0';
        i++;
    }
    
    return env;
}

int shift(int n)
{
    int pos = 0;

    while (n != 0) 
    {
        pos++;
        n = n >> 1;
    }
    return pos;
}

int Josuef(int n)
{
    int place = shift(n);
    int j = 1 << (place - 1);

    if(n == 0)
    {
        return 1;
    }
    n = n ^ j;
    n = n << 1;
    n = n | 1;
    return n;
}
void PtintDataTypes()
{
    int i = 0;
    int arr[] ={sizeof(char) , sizeof(unsigned char) , sizeof(signed char),
                sizeof( int) , sizeof(short int) , sizeof(unsigned short int ),
                sizeof( unsigned int) , sizeof( short ) , sizeof(unsigned short) ,
                sizeof(long), sizeof(unsigned long ) , sizeof(long int ) , sizeof (unsigned long int) };
    char *name[]={ "char","unsigned char" ,"signed char","int","short int"
                   ,"unsigned short int ","unsigned int","short","unsigned short"
                   ,"long","unsigned long","long int","unsigned long int"};


    for (i = 0; i < 12; ++i)
    {
        printf("size of %s  is :%d \n",name[i],arr[i]);
    }
}
