#include<stdio.h>
main()
{
	 int n,fact;
	 
	 printf(" enter a fact value :");
	 scanf(" %d" ,&n);
	 
	 while(n>=1)
	   {
	   	
	   	 fact=fact*n;
	   	 
	   	 n--;
	   }
	   printf("%d" ,&fact);
}
