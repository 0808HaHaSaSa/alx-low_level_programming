#include <stdio.h>
#include <string.h>
/**
*rev_string- reverses a string.
*@s:it the argument
*description:reverses a string.
*Return:  always 0
*/
void rev_string(char *s)
{
int n, i;
n = strlen (s);
for (i = n - 1; i >= 0 ; i--)
putchar(s[i]);
}
