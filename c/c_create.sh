#!/usr/bin/bash


file_name=$1
date=$(date +%d/%m/%y)


cd ~/git/c/

touch $file_name.c
chmod 666 $file_name.c

cat >> $file_name.c << EOF
/*******************************************************************************
 *
 * File: $file_name .C file.
 * Description: 
 * date: $date
 * author: Dor Knafo
 * reviewer: 
 *
 ******************************************************************************/
 
#include "$file_name.h"
 
EOF


touch $file_name.h
chmod 666 $file_name.h

cat >> $file_name.h << EOF
/*******************************************************************************
 *
 * File: $file_name.c Header file.
 *
 * date: $date
 * author: Dor Knafo
 * reviewer: 
 *
 ******************************************************************************/
 
#ifndef 
#define



#endif

EOF



touch $file_name"_test.c"
chmod 666 $file_name"_test.c"

cat >> $file_name"_test.c" << EOF
/*******************************************************************************
 *
 * File: $file_name test file.
 * date: $date
 * author: Dor Knafo
 * reviewer: 
 *
 ******************************************************************************/
 
#include <stdio.h>

#include "$file_name.h"

int main()
{
	return (0);
}

EOF
