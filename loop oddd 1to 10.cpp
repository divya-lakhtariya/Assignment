#include <stdio.h>

int main() 
{

	int i;
	printf("odd numbers  1 to 10 :\n");
	for (i = 1; i <= 10; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}
}
