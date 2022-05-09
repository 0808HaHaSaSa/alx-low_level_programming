#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
/**
**jack_bauer - the sum of all its parameters.
*
*description: the sum of all its parameters.
*Return:  always 0
*/
void jack_bauer(void)
{
int i, j = 0, k, l;
for (i = 0; i <= 23; i++)
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9; l++)
{
if (i < 10)
{
printf("%d%d:%d%d\n", j, i, k, l);
}
else
{
printf("%d:%d%d\n", i, k, l);
}
}
}
}
}
