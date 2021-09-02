
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
    size_t count = 0;

    while(*text)
    {
        text++;
        count++;
    }
    return count;
}
void ToLower(char *str)
{
    int i = 0;
    for (;*(str+i);i++)
    {
        *(str+i) = tolower(*(str+i));
    }
}


int EnviormaenLow(char *envp[])
{
    char **tmp1 = NULL, **env = NULL;
    int i = 0;


    env = (char**)malloc(sizeof(char*) * CheckSize(envp));
    for (tmp1 = envp; *tmp1 != 0; tmp1++)
    {
        *(env + i) = (char*)malloc(sizeof(char)*(strlen(*tmp1)+1));

        if (*(env + i) == NULL)
        {
            printf("exited badly");
            FreeEnv(env);
            return (0);
        }
        else
        {
            *(env + i) = strcpy(*(env + i),*tmp1);
            ToLower(*(env + i));
            printf("%s\n", *(env + i));
        }


        i++;
    }
    FreeEnv(env);
    return (1);
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
