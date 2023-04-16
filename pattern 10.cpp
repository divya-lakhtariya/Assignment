#include<stdio.h>
main()

{
    int i,j,a,n;
    scanf("%d",&n);
 
    for(i=-n;i<=n;i++) 
    {
        a=i;
        if(a<0)
            a= a*-1;
 
        for(j=0;j<=n;j++)
        {
            if(a<=j)
                printf("*");
        }
        printf(" \n");
    }
    
}
