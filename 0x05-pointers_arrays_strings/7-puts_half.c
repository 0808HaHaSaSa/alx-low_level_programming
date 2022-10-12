#include <stdio.h>
#include <string.h>
/**
*puts_half- prints half of a string
*@str:it the argument
*description:prints half of a string
*Return:  always 0
*/
void puts_half(char *str)
{
int n, i;
n = strlen(str);
if (n % 2 == 0)
for (i = n / 2 ; i < n ; i++)
putchar(str[i]);
else
for (i = (n - 2) / 2 ; i < n ; i++)
putchar(str[i]);
printf("\n");

}
