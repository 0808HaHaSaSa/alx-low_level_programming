#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
**sum_them_all - the sum of all its parameters.
*@n:it the argument
*description: the sum of all its parameters.
*Return:  always 0
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}

