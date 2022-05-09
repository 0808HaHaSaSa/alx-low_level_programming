#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
/**
**times_table - the sum of all its parameters.
*
*description: the sum of all its parameters.
*Return:  always 0
*/
void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
printf("%d", i*j);
if (j != 9)
printf(", ");
}
printf("\n");
}
}
