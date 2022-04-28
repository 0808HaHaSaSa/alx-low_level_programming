#include <stdio.h>
/**
**binary_to_uint - the sum of all its parameters.
*@b:it the argument
*description: the sum of all its parameters.
*Return:  always 0
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int i = 0;
if (b == NULL)
return (0);
while (b[i] == '0' || b[i] == '1')
{
val <<= 1;
val += b[i] - '0';
i++;
}
return (val);
}
