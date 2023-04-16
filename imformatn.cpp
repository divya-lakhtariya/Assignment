#include<stdio.h>
main()
{ 
	
   char yourname[20] ,youraddress[30];
   int yourage ,yourbirth;

    printf("Whats your name?\t");
    scanf("%18[^\n]s", yourname);

    yourname[19] = '\0';
    fflush(stdin);

    printf("How old are you?\t");
    scanf(" %d",&yourage);
    
    printf("How your birth date?\t");
    scanf(" %d",&yourbirth);
    
    printf("How your address?\t");
    scanf(" %s",&youraddress);
    
    printf(" %d ,%s, %d ,%s\n\n\n\n\n", yourage, yourname ,yourbirth,youraddress);

	
	
}
