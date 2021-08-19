/*Written by : Or Asraf [ID - 311391874]
August 2021
Infinity Labs R&D*/

#include<stdlib.h> /*malloc and sizeOf */
#include<string.h> /*strlen */
#include <stdio.h> /*print */
#include <ctype.h> /* using in tolower*/
#include<math.h>   /* using pow*/

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
            FreeEnv(env);/*if the allocation not sucsecfult we free the memory me use */
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
     env[i+1]=NULL;
    return env;
}

int Josuef(int n)
{
    int i = 0,m;
    int a[32] = { 0 };
    int b[33] = { 0 };
    int winner = 0;

    if(n <= 2 )
    {
        return 1;
    }
    for( m=n ; m > 0 ; i++)
    {
        a[i] = m%2 ;
        m = m/2 ;
    }
    for( i=i-1 ; i >= 0 ; i--)
    {
        b[i+1] = a[i];
    }
    for ( i=32 ; i >= 0 ; i-- )
    {
        if(b[i] == 1 )
        {
            b[i] = 0;
            break;
        }
    }
    b[0]=1;
    for( i = 0 ; i<32 ; i++)
    {
        if(b[i] == 1)
        {
            winner = winner + pow(2,i);
        }
    }
    return winner;
}

void PtintDataTypes()
{
    char c = 'c';
    unsigned char uc ='v';
    signed char sc = 'v';
    int i =0;
    unsigned int ui = 0;
    short s = 0;
    unsigned short us = s;
    long l = 12;
    unsigned long ul = 21;
    long int li =1;
    unsigned long int uli;

    printf("size of char :%ld "
           "\nsize of unsigned char :%ld "
           "\nsize of signed char  :%ld "
           "\nsize of int :%ld "
           "\nsize of unsigned int :%ld "
           "\nsize of short :%ld "
           "\nsize of unsigned short :%ld "
           "\nsize of long :%ld "
           "\nsize of unsigned long :%ld "
           "\nsize of long int :%ld "
           "\nsize of  unsigned long int :%ld \n"
           ,sizeof(c),sizeof(uc),sizeof(sc),sizeof(i),sizeof(ui)
           ,sizeof(s),sizeof(us),sizeof(l),sizeof(ul),sizeof(li)
           ,sizeof(uli));

}

