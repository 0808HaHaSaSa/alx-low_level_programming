#include <stdio.h>
/**
*print_line - draws a straight line in the terminal
*@n:it the argument
*description:draws a straight line in the terminal
*Return:  always 0
*/
void print_line(int n)
{
int j;
if (n > 0)
for (j = 0; j < n; j++)
{
printf("_");
}
printf("$\n");
}
