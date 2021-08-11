#include<stdio.h>

int pow(int n)
{
   if(n==0)
     return 1;

   int sum=10;

   for(int i=0; i < n; i++)
   {
 	sum*=10;	
   }
   return sum;
}

void main()
{
		
}
