#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
***print_numbers - the sum of all its parameters.
*@n:it the argument
*@separator:argument
*description: the sum of all its parameters.
*Return:  always 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
int sum=0;
unsigned int i;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
printf("%d%s ",va_arg(ap,int),separator);
va_end(ap);
putchar("\n");
}
