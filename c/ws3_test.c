/*   * Written by : Or Asraf [ID - 311391874 ]
 * August 2021
 * Infinity Labs R&D  */


#include<stdio.h> /*PRINTF*/
#include <ctype.h> /*tolower*/
#include <string.h> /* strlen */

#include "ws3.h"


int CheckEnv(char **src,char **dst)
{
    int i =0;
    int j =0;
    int flag = 0;

    if(CheckSize(src) != CheckSize(dst))
    {
        return 1;
    }
    for (; i < CheckSize(dst) ; ++i)
    {
        if(strlen(src[i]) != strlen(dst[i]))
        {
            printf("%ld or asraf   %ld ",strlen(src[i]) , strlen(dst[i]));
            flag = 1;
            return (i);
        }
        /* if you whant to print the env to check */
                  for ( j = 0; j < strlen(dst[i]); ++j)
                  {
                      printf("%c",dst[i][j]);
                  }
                  printf("\n");

                 for ( j = 0; j < strlen(dst[i]); ++j)
                  {
                     printf("%c",src[i][j]);
                  }
                 printf("\n");
    }
    if(flag == 1)
    {
    	    printf("\n\n CheckEnv not work \n\n");
    }
    else
    {
    	    printf("\n\n CheckEnv work  !!!!! \n\n");
    }
    return 0;

}
int checkJosuef()
{
    if(Josuef(49) != 35 || Josuef(52) != 21 || Josuef(10) != 97 )
    {
        printf("---Huston we have a problem! (Josephus calculations)---\n");

    }

    printf("---Josephus is good!---\n");
    return 0;
}


int main(int argc, char *argv[], char * envp[])
{
    char **env = EnviormaenLow(envp);
    FreeEnv(env);

    PtintDataTypes();

   if( CheckEnv(envp,env) ==1)
   {
       return 1;
   }
   
   checkJosuef();
   
   printf(" i pass the lines");



    return 0;

}
