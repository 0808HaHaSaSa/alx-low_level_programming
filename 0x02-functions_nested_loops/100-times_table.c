#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
/**
**print_times_table - the sum of all its parameters.
*@n:argument
*description: the sum of all its parameters.
*Return:  always 0
*/
void print_times_table(int n)
{
int i, j;
if (n < 15)
{
for (i = 0; i < n + 1; i++)
{
for (j = 0; j < n + 1; j++)
{
printf("%d", i * j);
if (j != n)
{
if ((i * (j + 1)) <= 9)
{
printf(",   ");
}
else
{
if ((i * (j + 1)) <= 99)
{
printf(",  ");
}
else
{
printf(", ");
}
}
}
}
printf("\n");
}
}
}
