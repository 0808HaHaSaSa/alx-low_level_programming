#include <stdio.h>
#include <string.h>
/**
*print_rev- prints a string, in reverse
*@s:it the argument
*description:prints a string, in reverse
*Return:  always 0
*/
void print_rev(char *s)
{
int n ,i;
n= strlen (s);
for (i=n-1; i>=0 ;i--)
putchar(s[i]);
printf("\n");
}
