#include <stdio.h>
#include <string.h>
/**
*print_array - prints n elements of an array of integers
*@a:it the argument
*@n:it the argument
*description: prints n elements of an array of integers
*Return:  always 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
		printf("\n");
}
