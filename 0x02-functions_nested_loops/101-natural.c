#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
/**
**natural - the sum of all its parameters.
*
*description: the sum of all its parameters.
*Return:  always 0
*/
void natural(void)
{
int i, s = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
s = s + i;
}
}
printf("%d", s);
}
