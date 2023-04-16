#include<stdio.h>
main()
{
	char name[5]={'t','o','p','s'};
	char surname[10],address[30];
	int count=0,i;
	
	scanf("%s" ,name);
	for(i=0;name[i]!='\0';i++){
	count++;
}
printf("\n total length : %d" ,count);
}
	
