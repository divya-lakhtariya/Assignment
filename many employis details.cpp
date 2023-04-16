#include<stdio.h>
struct employee
{
    int no, age ;
    char name[30], add[30];
}
   emp[100];

 main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as no , name , age , add\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %s",&emp[i].no,emp[i].name,&emp[i].age,&emp[i].add);
    }
    printf("\nEMP_no\tEMP_name\tEMP_age\t\tEMP_add\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%s\n",emp[i].no,emp[i].name,emp[i].age,emp[i].add);
    }
}

