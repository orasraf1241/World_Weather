/* Written by : Or Asraf [ID - 311391874 ]
 * August 2021
 * Infinity Labs R&D  */


#include<stdio.h> /*PRINTF*/
#include <ctype.h> /*tolower*/
#include <string.h> /* strlen */

#include "ws3.h"


int checkJosuef()
{
 if(Josuef(49) != 35 || Josuef(52) != 41 || Josuef(10) != 5 )
    {
        printf("---Huston we have a problem! (Josephus calculations)---\n");
        printf("49 is -> %d\n 52 is ->%d\n 10 is %d",Josuef(49),Josuef(52),Josuef(10));
    }
 

    printf("---Josephus is good!---\n");
    return 0;
}


int main(int argc, char *argv[], char * envp[])
{
   EnviormaenLow(envp);
   PtintDataTypes();
   checkJosuef();
   
   printf(" i pass the lines");



    return 0;

}
