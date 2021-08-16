/*******************************************************************************
 *
 * File: .c Header file.
 *
 * date: 15/08/21
 * author:Or Asraf
 * reviewer: 
 *
 ******************************************************************************/
 


#ifndef _HEADERFILE_H_
#define _HEADERFILE_H_
#include<stdlib.h>


/* This func copy array of integer and return new array
int *copyArray(int *array,int size); */

/*this funcs return the size of string */
size_t Strlen(const char *str);

/* this funcs chaeck if to string equales the funcs check the string
  char by char and return 1 if the strings equals and 0 if not */
int Strcmp(char *str1,char *str2);

/*this funcs get 2 sstrings 1 is the dest and one is the source the func
allocated string with N char and get the firs N char in the src string
and copy it to dest string
 WARNING dont forget the free the memory after usuing */
char * Strncpy(char* dest, const char* src1, int size);

/*function  performs  a  byte-by-byte  comparison of the strings s1 and s2,
 ignoring the case of the characters.  It returns an integer less than,
 equal to, or greater than zero if s1 is found,
 respectively, to be less than, to match, or be greater than s2. */
int Strcasecmp(const char *s1, const char *s2);



/* The strcpy() function copies the string pointed to by src,
 including the terminating null byte ('\0'),
 to the buffer pointed to by dest.  The strings may not overlap,
 and the des‐ tination  string  dest  must be large enough to receive the copy. */
char* StrCpy(char* dest, const char* src);

/*function returns a pointer to the first occurrence of the character c in the string s. */
char *Strchr(const char *s, int c);


/* This function  returns  a  pointer  to a new string which is a duplicate of the string s
  Warning !! this funcs aloocated memory dint forget to FREE !! the memory !!*/
char *Strdup(const char *s);

/* This funcs check if the String is polyndrom */
int IsPolindrom(char *str);

/* This funcs remove all the white space from the String */
char * removeBlanks(char *str);

#endif 


