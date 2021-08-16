/*******************************************************************************
// *
// * File:  test file.
// * date: 11/08/21
// * author: Or Asraf
// * reviewer:
// *
// ******************************************************************************/

#include "ws2.h"
#include<string.h>
#include <stdio.h>
int main()
{

    /* StrCopy test   */
    char *str1= "Israel";
    char *str2 = "C is The Best";
    char *str3 = "Have A Nice 34 Day";
    char *test;
    char *test2;
    char *str4 = "IsrsI";
    char *str5 = "C& is &C";
    char *str6 = "Have3A Nice eciN A3evaH";
    char *str7= "or asraf";
    char *str8 = "or asraf 64 farsa ro";
    char *strtest="";


    printf(" Chcking strCpy   \n\n\n\n\n");
    strtest = StrCpy(strtest,str1);
    printf("%s  \n ",strtest);
    if(strcmp(strtest,str1) != 0)
    {
        printf(" strcpy not working good !! she need to print %s   but she print %s \n",str1 ,test );
    }
    strtest = StrCpy(strtest,str2);
    if(strcmp(strtest,str2) != 0)
    {
        printf(" strcpy not working good !! she need to print %s   but she print %s \n", str2 ,test );
    }
    strtest = StrCpy(strtest,str3);
    if(strcmp(strtest,str3) != 0)
    {
        printf(" strcpy not working good !! she need to print %s   but she print %s \n",str3 ,test );
    }
    strtest = StrCpy(strtest,str2);
    if(strcmp(strtest,str2) != 0)
    {
        printf(" strcpy not working good !! she need to print %s   but she print %s \n",str3 ,test );
    }




    /********************************** This is test for StrNcpy ***************************************************/

    strtest = Strncpy(test,str3,5);
    if(strcmp(strtest, strncpy(strtest,str3,5)) != 0)
    {
        printf(" strNcpy not working good !! she need to print %s   but she print %s \n",str3 ,test );
    }
    strtest = Strncpy(test,str6,5);
    if(strcmp(strtest, strncpy(strtest,str3,5)) != 0)
    {
        printf(" strNcpy not working good !! she need to print %s   but she print %s \n",str3 ,test );
    }
    strtest = Strncpy(test,str7,4);
    if(strcmp(strtest, strncpy(strtest,str3,5)) != 0)
    {
        printf(" strNcpy not working good !! she need to print %s   but she print %s \n",str3 ,test );
    }
    strtest = Strncpy(test,str5,6);
    if(strcmp(strtest, strncpy(strtest,str3,5)) != 0)
    {
        printf(" strNcpy not working good !! she need to print %s   but she print %s \n",str3 ,test );
    }


    /* **************************************Strdup***************************/
    if(!strcmp(StrCpy(test,str3), strcpy(strtest,str3)))
    {
        printf("Strcpy not Working line 79 \n");
    }
    if(!strcmp(StrCpy(test,str4), strcpy(strtest,str4)))
    {
        printf("Strcpy not Working line 79 \n");
    }
    if(!strcmp(StrCpy(test,str5), strcpy(strtest,str5)))
    {
        printf("Strcpy not Working line 79 \n");
    }

    /************************************* Strcasecmp *********************************/

    if(Strcasecmp("oLgA","Olga") != strcasecmp("OLGA","OLgA"))
    {
        printf("Strcasecmp not workink \n");
    }
    if(Strcasecmp("Or asraf","oR aSrf2") == strcasecmp("Or asraf","oR arAf2"))
    {
        printf("Strcasecmp not workink \n");
    }
    if(Strcasecmp("Or asraf","oR aSrAf2") == strcasecmp("Or asraf","oR aSrAf2"))
    {
        printf("Strcasecmp not workink \n");
    }
    Strcasecmp("or asra", "or asraf");
    test2 =(char*)Strchr(str3,'A');

    /* **********************************IS a Polyndrom *********************************/
    printf("This is the test for Polindrom  \n\n\n\n\n\n");


    StrCpy(strtest,str1);

    printf("str4 & str5 & str6 polyndrom the athers not \n");

    if(IsPolindrom(str4) == 1)
    {
        printf("is a Polyndrom %s   \n",str4 );
    }

    if(IsPolindrom(str5) != 1)
    {
        printf("is a Polyndrom %s   \n",str5 );
    }

    if(IsPolindrom(str6) != 1)
    {
        printf("is a Polyndrom %s   \n",str6 );
    }
    if(IsPolindrom(str7) == 1)
    {
        printf("is not Polyndrom %s   \n",str7 );
    }
    if(IsPolindrom(str8) == 1)
    {
        printf("is not Polyndrom %s  \n ",str8 );
    }


    /***************************** 7 BOOM !!! ************************************/

    return 0;
}
