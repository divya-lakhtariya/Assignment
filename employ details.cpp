#include <stdio.h>

struct Employee
{
    int no, age ;
    char name[30], add[30];
};

int main()
{
    struct Employee e;

    printf("Enter the no of the Employee: ");
    scanf("%d", &e.no);

    printf("Enter the age of the Employee: ");
    scanf("%d", &e.age);

    printf("Enter the name of the Employee: ");
    getchar();
    fgets(e.name, 30, stdin);

    printf("Enter the add of the Employee: ");
    fgets(e.add, 30, stdin);

    
    printf("\nEmployee Details:\n");
    printf("Employee Id: %d\n", e.no);
    printf("Employee Name: %s", e.name);
    printf("Employee age: %d\n", e.age);
    printf("Employee designation: %s", e.add);
    
}
