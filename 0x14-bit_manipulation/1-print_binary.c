#include <stdio.h>
#include <string.h>
/**
**print_binary - the sum of all its parameters.
*@n:it the argument
*description: the sum of all its parameters.
*Return:  always 0
*/
void print_binary(unsigned long int n)
{
for (int i = sizeof(int) * 4; i >= 0; i--)
printf("%d", (n & (1 << i)) >> i );
}
