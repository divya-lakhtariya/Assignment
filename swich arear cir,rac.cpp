#include<stdio.h>
main()
{
	int value ;
	float leg, bre, hei, area, radius;
	
	printf("enter  to find area of circle");
	printf("\nenter to find area of tringle");
	printf("\nenter to find area of ractangle");
	scanf("%d" ,&value);
	
	switch(value)
	{
    case 1:
	printf(" enter the circle");
	scanf("%f" ,&radius);
	area =3.14*radius*radius;
	printf(" \narea of a circle=%f" ,area);
	break;
	
	case 2 :
	printf(" Enter the rectangle");
    scanf("%f %f",&bre, &leg);
    area=bre *leg;
    printf("\nArea of a Rectangle=%f", area);
    break;
    
    case 3:
    printf(" enter the tringle ");
    scanf("%f,%f", &bre,&hei);
    area=bre *hei /2;
    printf("\n\n Area of Triangle is=%f",area);
    break;
    
	default:
	printf(" bye bye");
	break; 

}

   
	
}
