#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
/**
**fibonacci - the sum of all its parameters.
*
*description: the sum of all its parameters.
*Return:  always 0
*/
void fibonacci(void)
{
int i = 0, j = 1, s = 1;
while (s < 50)
{
printf("%d, ", s);
s = j + i;
i = j;
j = s;
}
}
int main(void)
{
fibonacci ();
return (0);
}
