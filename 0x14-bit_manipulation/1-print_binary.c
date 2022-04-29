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
if (n > 1)
{
print_binary(n / 2);
}
printf("%d", n % 2);
}
