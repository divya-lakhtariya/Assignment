#include <stdio.h>
int main()
{
    int  A, B, add, subtract, multiply;
    float divide;
    
    printf("Enter two NUMBER\n");
    scanf("%d%d", &A, &B);
    add      = A+B;
    subtract = A-B;
    multiply = A*B;
    divide= A/(float)B; 
    printf("Sum %d\n",add);
    printf("Difference %d\n",subtract);
    printf("Multiplication %d\n",multiply);
    printf("Division %.2f\n",divide);
    
}
