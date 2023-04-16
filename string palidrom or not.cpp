#include<stdio.h>
main()
{
	
	char name[5]={'t','o','p','s'},reverse[5];
	char surname[10],address[30];
	int count=0,i,j,diff=0;
	
	
	for (i=0;name[i]!='\0';i++)
	{
	
	count++;
}

j=0;
for(i=count-1;i>=0;i--)
{
	reverse[j]=name[i];
	j++;
}
printf("%s" ,reverse);

for(i=0;name[i]!='\0';i++)
{
	if(reverse[i]!=name[i])
	{
		diff=1;
		break;
	}
}
if(diff==1)
{
	printf(" it is not palidrom");
	
}
else
{
	printf(" it is palidrom");
}
	
}
