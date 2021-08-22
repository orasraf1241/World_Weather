/*******************************************************************************
 *
 * File: .c Header file.
 *
 * date: 15/08/21
 * author:Or Asraf
 * reviewer:
 *
 ******************************************************************************/

#include<stdio.h> /* printf ,scanf ,fopen ...*/
#include<string.h> /* strlen ,strcmp*/

#include "ws4.h"



int RemoveFile(char *filename)
{
    if (remove(filename) == 0)
    {
        printf("The file is deleted successfully. \n");
    } else
    {
        return CANNOT_DELETE_FILE;
    }
    return SUCCESSFULLY;
}

/* THis funcs count the number of line in "filename" file */
int LinesCounter(char *filename)
{
    FILE *file;
    int count = 0;
    char c;

    file = fopen(filename, "a+");
    fseek(file,1,SEEK_SET);

    if (file == NULL)
    {
        printf("Could not open file %s", filename);
        return CANNOT_OPEN_THE_FILE;
    }

    for (c = getc(file); c != EOF; c = getc(file))
    {
        if (c == '\n')
        {
            count++;
        }
    }

    fclose(file);

    printf("The numbers of line in %s is %d",filename,count);
    return SUCCESSFULLY;
}


/*this funcs open new file or old file and add lines to this file antil the user chose to de
 * let the file or close aim wit -exit flag */
int WriteFiles()
{
    int flag =0;
    FILE *file;
    char filename[100];
    char tmp[1000];
    char str[1000];
    int i = 0;
    printf("Input a file name :");
    scanf("%s",filename);

    file = fopen(filename,"a+");
    fseek(file,1,SEEK_END);

    if (file == NULL)
    {
        return CANNOT_OPEN_THE_FILE;
    }

    while(strcmp(str,"-exit\n"))
    {
        printf("\nEnter a line :");
        fgets(str, sizeof(str), stdin);
        if(!strcmp(str,"-remove\n"))
        {
            fclose(file);
            return RemoveFile(filename);
        }
        else if(!strcmp(str,"-count\n"))
        {
            fseek(file,0,SEEK_END);
            fclose(file);
            flag = LinesCounter(filename);
        }
        else if('<' == str[0] )
        {
            file = fopen(filename,"r+");
            fseek(file,0,SEEK_SET);

            for ( i = 0; i < strlen(str); ++i)
            {
                tmp[i]=str[i+1];
            }

            fputs(tmp, file);
            file = fopen(filename,"a+");
            fclose(file);
        }
        else if(strcmp(str,"-exit\n"))
        {
            fputs(str, file);
        }
    }
    fclose(file);
    return flag;
}



void get_a (int  a)
{
    printf ("%d ",a);
}

/* this func Initiation the struct and print aim   */
void PrintStructs()
{
    int i=0;
    print_me my_structs[10];

    /* Initiation all the arrat of struckts */
    for ( i = 0; i < 10; ++i)
    {
        my_structs[i].value = i;
    }

    /* Callint to the func in the staructs */
    for ( i = 0; i < 10; ++i)
    {
        my_structs[i].Print = get_a;
        my_structs[i].Print(my_structs[i].value);
    }
    printf("\n");

}