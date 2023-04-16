#include<stdio.h>
int main()
{
    int a[5], i, max;
    printf("Enter 5 Array Elements: ");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    max = a[i];
    for(i=0;i<5;i++)
    {
        if(max <a[i])
            max = a[i];
    }
    printf("\n max Number = %d", max);

}
