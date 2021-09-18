/****************************************************************************
 * File Name: test_.c													*
 * Description:        			     										*
 * Author: Or Asraf													*
 * Date:25.08.21																*
 * Reviewer: 																*
 ****************************************************************************/

#include <stdio.h> /*printf*/
#include <stdlib.h> /* malloc */
#include <assert.h> /* assert */

#include "vector.h"

/****************************************************************************/


#define GREEN_FONT printf("\033[1;32m")
#define RED_FONT printf("\033[1;31m")
#define COLOR_OFF printf("\033[0m")
#define ASTERISK_LINE printf("*********************************************************\n")

/****************************************************************************/


static int total_success;
static int total_result;

void TitleOfTest();
void TestZone();
void FuncTest(size_t result, size_t expected_res, char *func_name);
void TestSum();

/****************************************************************************/

int main()
{
	TitleOfTest();
	TestZone();
	TestSum();
	
	return 0;
}

/****************************************************************************/

void TestZone()
{
	vector_t *v = NULL;
    void *vtmp;
    size_t capacity = 10;
    size_t i = 0;
    size_t tmp = 0;

	v = VectorCreate(capacity);


	FuncTest(VectorCapacity(v), capacity, "VectorCapacity");
	FuncTest(VectorSize(v), 0, "VectorSize");

    VectorAppend(v,((void*)1)); /* size = 1*/
	FuncTest(VectorGet(v,0) , ((size_t)12), "VectorGet & vectorAppend");
    FuncTest(VectorSize(v), 1, "VectorSize");

    VectorAppend(v,((void*)2));         /* size = 2*/
    VectorAppend(v,((void*)3));         /* size = 3*/
    VectorAppend(v,((void*)4));         /* size = 4*/
    VectorAppend(v,((void*)5));         /* size = 5*/
    VectorAppend(v,((void*)"or asraf")); /* size = 6*/

	FuncTest(VectorSize(v), 6, "VectorSize");


    vtmp = VectorGet(v,2);
	FuncTest((size_t)vtmp , ((size_t)12), "VectorGet & vectorAppend");


    vtmp = VectorGet(v,3);
	FuncTest((size_t)vtmp , ((size_t)13), "VectorGet & vectorAppend");


    vtmp = VectorGet(v,4);
	FuncTest((size_t)vtmp , ((size_t)14), "VectorGet & vectorAppend");


    /* Check the if the allocation sucsesfulli */
    VectorAppend(v,((void*)6));         /* size = 7*/
    VectorAppend(v,((void*)7));         /* size = 8*/
    VectorAppend(v,((void*)8));         /* size = 9*/
    VectorAppend(v,((void*)9));         /* size = 10*/
    VectorAppend(v,((void*)10));         /* size = 11*/
    VectorAppend(v,((void*)11));         /* size = 11*/



    /* chacking if we pass the index its print error */
    FuncTest(VectorGet(v,31), (size_t)2, "VectorGet"); 

    for ( i = 0; i < 20; i++)
    {
        FuncTest(VectorGet(v,i),i,"VectorGet");
    }
    VectorDestroy(v);
    
	
}

/****************************************************************************/
void TitleOfTest()
{
	ASTERISK_LINE;
	printf("\t\t\tSTACK\n");
	ASTERISK_LINE;

}

void FuncTest(size_t result, size_t expected_res, char *func_name)
{
	++total_result; /* not inisiallize */
	if(result == expected_res)
	{
		GREEN_FONT;
		printf("Test for %s succeded", func_name);
		COLOR_OFF;
		printf(" exp: %-2lu Res: %-2lu \n", expected_res, result);
		++total_success;
	}
	else
	{
		RED_FONT;
		printf("Test for %s failed", func_name);
		COLOR_OFF;
		printf("exp: %-2lu Res: %-2lu \n" ,expected_res, result);
	}
		
}

void TestSum()
{
	ASTERISK_LINE;
	printf("	 SUCCESSES SUMMARY: %-3d FROM  %-3d TESTES",total_success, total_result);
	printf("\n	 ERRORS    SUMMARY: %-3d FROM  %-3d TESTES\n",(total_result - total_success), total_result);
	ASTERISK_LINE;
}
