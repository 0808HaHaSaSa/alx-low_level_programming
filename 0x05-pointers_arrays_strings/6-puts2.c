#include <stdio.h>
#include <string.h>
/**
*puts2- reverses a string.
*@str:it the argument
*description:reverses a string.
*Return:  always 0
*/
void puts2(char *str)
{
int n, i;
n = strlen(str);
for (i = 0 ; i < n ; i++)
if (str[i] % 2 == 0)
putchar(str[i]);

}
