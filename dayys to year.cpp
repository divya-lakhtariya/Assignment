//#include<stdio.h>  
//int main()   
//{ 
//int days, years;  
////days= 543;  
//years=  days / 365;   
//printf("\n\n Number of years is : %d",years);  
                     
//}  
#include <stdio.h>
main()
{
int days,years;
days = 1329; 

printf("enter the number of days:");
scanf("%d",&days);

years = days/365;
days = days-(years*365); 

printf("Years: %d\n",years);
printf("Days: %d \n",days);


}
