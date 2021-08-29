/*******************************************************************************
 *
 * File: .c Header file.
 *
 * date: 15/08/21
 * author:Or Asraf
 * reviewer:
 *
 ******************************************************************************/
#include "ws4.h"




int main(int argc ,char *argv[])
{
    int exit_status = 0;

    PrintStructs();
    printf("%d", exit_status);
    exit_status = WriteFiles(argv[1]);

    return (exit_status);
}
