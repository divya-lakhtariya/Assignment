#include <stdio.h>
int main()
{   
    int i, j,a=64,n=1;
    
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
    	for (j=1; j<=i; j++)
        {
        	 printf("%c ",a);
        	 
        	 a++;
        }
         printf("\n");
     }
 }
 
    
    
   
