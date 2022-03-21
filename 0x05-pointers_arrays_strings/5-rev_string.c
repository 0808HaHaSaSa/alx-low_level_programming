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
int n, i, j = 0;
n = strlen (s);
for (i = n - 1 ; i >= 0 ; i--)
s[j] = s[i];
j++;
}
