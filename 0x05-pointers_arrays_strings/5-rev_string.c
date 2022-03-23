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
char a;
n = strlen (s);
for (i = 0 ; i < n / 2 ; i++)
{
a = s[i];
s[i] = s[n - 1 - i];
s[n - 1 - i] = a;
}
}
