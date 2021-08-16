

#include "ws2.h"
#include <assert.h>
#include<string.h>
#include <stdio.h>


size_t Strlen(const char *str)
{
    size_t size=0;
    while(str)
    {
        if(str[size]=='\0')
        {
            break;
        }
        size++;
    }
    return size;
}

int sameKey(char a, char b)
{
    if(a==b)
    {
        return 1;
    }
    else if((a >= 65 || a <= 122) && (b >= 65 || b <= 122) )
    {
        if( (a==b) || ((a+32)==b) ||( a==(b+32)))
        {
            return 1;
        }
        return 0;
    }
    return 0;
}
int Strcasecmp(const char *s1, const char *s2)
{
    int i = 0;
    while( s1[i]!= '\0')
    {
        if(sameKey(s1[i],s2[i]) ==0)
        {
            return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}


char* StrCpy(char* dest, const char* src)
{
    int i = 0;
    int size = Strlen(src);
    dest = (char *) malloc(strlen(src) *sizeof(char ) );
    assert(dest);
    assert(src && dest);
    for ( ; i < size; i++) {
        dest[i] =src[i];
    }
    dest[i+1] = '\0';
    return (dest);
}


char * Strncpy(char* dest, const char* src, int size)
{
    int i = 0;
	assert(src);
	dest = (char *) malloc(strlen(src) *sizeof(char ) );
	assert(dest);
	for (; i < size; ++i)
	{
	    if(src[i]=='\0'){
            break;
	    }
	    dest[i] = src[i];
	}
	dest[i+1] = '\0';
	return dest;
}

int IsPolindrom(char *str)
{
    int i=0;
    int size = (int)Strlen(str);
    for( i = 0 ; i < size ; i++)
    {
        if(str[i] != str[size-i-1])
        {
            return 0;
        }
    }
    return 1;
}
char *Strdup(const char *s)
{
    char *str;
    int i = 0;
    int size = 0;

    str = (char *) malloc(strlen(s) *sizeof(char ) );
    assert(str);
    size = (int)Strlen(s);
    for ( i = 0; i < size; ++i)
    {
        str[i] = s[i];
    }
    str[i+1] = '\0';
    return str;
}


char *Strchr(const char *s, int c)
{
    while (s)
    {
        if(*s==c)
        {
            return (char*)s;
        }
        if(*s=='\0')
        {
            return (char*)s;
        }
        s++;
    }
    return (char*)s;

}

char * removeBlanks(char *str)
{
	int i = 0;
    int j = 0;
	int size = Strlen(str);
	
	for( i = 0, j = 0; i < size; i++)
	{
	    
            str[i-j] = str[i];
            if(str[i] == ' ')
            {
               j++;
            }
	}
	str[i-j] = '\0';
	
	return str;
}


void Boom(int start , int end)
{

     while (end%10 == 7 && end >= 9)
    {
         end /=10;
    }
    
    for( ; start <= end; start ++)
    {
        if( start%7 != 7)

        {
           printf(" %d ," ,start);
        }
        else
        {
           printf("BOOM  ," );
        }
    }
}


