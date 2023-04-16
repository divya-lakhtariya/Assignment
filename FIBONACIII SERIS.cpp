#include<stdio.h>
main()
{
	int a=1,b=2,c=0,n=20;
printf("\n%d",a);
printf("\n%d",b);
	while(n>=1)
{
	c=a+b;
	printf("\n%d",c);
		a=b;
		b=c;
		n--;
}
}
