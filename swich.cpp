#include<stdio.h>
main()
{
	char day;
	printf("\n enter day :");
	scanf("%c", &day);
	
	switch(day)
	{
		case 's':
	     printf("\n today is sunday");
		 printf("\n today is holiday");
		 brack:
		 case 'm':
		 printf("\n today is monday");
		 printf("\n  today is working day");
		 breack:
		 defult:
		 	printf("\n invalid choice");
		 	break;
		 	
	}
}
