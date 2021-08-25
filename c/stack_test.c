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

#include "ws8.h"

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
	stack_ty *pt_stack = NULL;
    void *vtmp;
    size_t t_capacity = 20;

	pt_stack = StackCreate(t_capacity);


	FuncTest(StackCapacity(pt_stack), t_capacity, "StackCapacity");
	FuncTest(StackSize(pt_stack), 0, "StackSize");

    StackPush(pt_stack, ((void *)12));
    vtmp = StackPeek(pt_stack);
	FuncTest((size_t)vtmp , ((size_t)12), "StackPush");
    FuncTest(StackIsEmpty(pt_stack), 0, "StackIsEmpty");


    StackPush(pt_stack, (void *)2);
    vtmp = StackPeek(pt_stack);
	FuncTest((size_t)vtmp, 2, "StackPush");
	FuncTest((size_t)StackPeek(pt_stack), 2, "StackPeek");

    StackPush(pt_stack, (void *)3);
	FuncTest((size_t)StackPeek(pt_stack), 3, "StackPeek");

    StackPush(pt_stack, (void *)4);
    vtmp = StackPeek(pt_stack);

	FuncTest((size_t)vtmp, 4, "StackPush");

	FuncTest(StackSize(pt_stack), 4, "StackSize");
	FuncTest((size_t)StackPeek(pt_stack), 4, "StackPeek");

	StackPop(pt_stack);
	StackPop(pt_stack);

	FuncTest((size_t)StackPeek(pt_stack), 2, "StackPeek");
	FuncTest(StackSize(pt_stack), 2, "StackSize");

    StackPush(pt_stack, (void *)5);
    vtmp = StackPeek(pt_stack);
	FuncTest((size_t)vtmp , 5, "StackPush");

    StackPop(pt_stack);                                                                                                           
    StackPop(pt_stack);
    StackPop(pt_stack);
    StackPop(pt_stack);
	
	FuncTest(StackIsEmpty(pt_stack), (size_t)0, "StackIsEmpty");
	StackDestroy(pt_stack);
	/*FuncTest(pt_stack, NULL, "StackDestroy");*/
	
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
