#include <stdio.h>
/**
*more_numbers - prints 10 tm the numbers, from 0 to 14, followed by new line.
*
*description:prints 10 times the numbers, from 0 to 14, followed by a new line.
*Return:  always 0
*/
void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
printf("%d", i);
}
printf("\n");
}
}
