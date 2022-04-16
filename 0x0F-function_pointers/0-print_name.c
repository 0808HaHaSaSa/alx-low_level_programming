#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
**print_name - prints a name.
*@name:it the argument
*@f:it the argument
*
*description:prints a name.
*Return:  always 0
*/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
{
}
else
f(name);
}
