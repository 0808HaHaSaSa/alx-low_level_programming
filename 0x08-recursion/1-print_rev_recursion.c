#include <stdio.h>
#include <string.h>
/**
**_print_rev_recursion - prints a string in reverse.
*@s:it the argument
*description: prints a string in reverse.
*Return:  always 0
*/
void _print_rev_recursion(char *s)
{
int n, i;
n = strlen(s);
for (i = n - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
}
