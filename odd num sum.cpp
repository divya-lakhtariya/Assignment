#include <stdio.h>  
main()  
{  
    int i, n, sum=0;  
    //printf("Enter any number: ");  
    scanf("%d", &n);  
    for(i=1;i<=n;i+=2)  
    {  
        sum += i;  
    }  
    printf("Sum of all odd numbers to %d: %d", n, sum);  
      
}  
