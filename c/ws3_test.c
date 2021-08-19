#include<stdio.h> /*PRINTF*/
#include<stdlib.h> /* malloc free */
#include <ctype.h> /*tolower*/
#include <string.h>

#include "ws3.h"


int CheckEnv(char **src,char **dst)
{
    int i =0;
    int j =0;

    if(CheckSize(src) != CheckSize(dst))
    {
        return 1;
    }
    for (; i < CheckSize(dst) ; ++i)
    {
        if(strlen(src[i]) != strlen(dst[i]))
        {
            /*printf("%ld or asraf   %ld ",strlen(src[i]) , strlen(dst[i]));*/
            return i;
        }
        /*
                  for ( j = 0; j < strlen(dst[i]); ++j)
                  {
                      printf("%c",dst[i][j]);
                  }
                  printf("\n");

                 for ( j = 0; j < strlen(dst[i]); ++j)
                  {
                     printf("%c",src[i][j]);
                  }
                 printf("\n");*/
    }
    return 0;

}
int checkJosuef()
{
    if( 0 != Josuef(0) || 35 != Josuef(49) || Josuef(522) != 21 || Josuef(999) != 975 || Josuef(99999999)!= 65782271 )
    {
        printf("---Huston we have a problem! (Josephus calculations)---\n");
        return 1;
    };

    printf("---Josephus is good!---\n");
    return 0;
}


int main(int argc, char *argv[], char * envp[])
{
    char **env = EnviormaenLow(envp);
    Josuef(5);
    PtintDataTypes();

   if( CheckEnv(envp,env) ==1)
   {
       return 1;
   }
   FreeEnv(env);

    return 0;
}