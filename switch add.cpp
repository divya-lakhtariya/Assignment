#include <stdio.h>

int main()
{
    printf("\n\t\tCALCULATOR");
    printf("\n1.ADDITION");
    printf("\n2.SUBTRACTION");
    printf("\n3.MULTIPLICATION");
    printf("\n4.DIVISION");
    
    int number,b,c,addition,subtraction,multiplication,division;
    printf("\nENTER NUMBER : ");
    scanf("%d",&number);
    
    printf("\nENTER VALUE : ");
    scanf("%d",&b);
    
    printf("\nENTER VALUE : ");
    scanf("%d",&c);
    
    switch(number)
    {
        case 1:
            addition=b+c;
            printf("\nADDITION : %d",addition);
            break;
        case 2:
            subtraction=b-c;
            printf("\nSUBTRACTION : %d",subtraction);
            break;
        case 3:
            multiplication=b*c;
            printf("\nMULTIPLICATION : %d",multiplication);
            break;
        case 4:
            division=b/c;
            printf("\nDIVISION : %d",division);
            break;
    }
    printf("HAVE A NICE DAY ");
}
