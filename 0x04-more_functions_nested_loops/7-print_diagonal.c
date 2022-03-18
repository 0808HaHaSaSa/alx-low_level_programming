#include <stdio.h>
/**
*print_diagonal - draws a straight line in the terminal
*@n:it the argument
*description:draws a straight line in the terminal
*Return:  always 0
*/
void print_diagonal(int n)
{
int j, i;
if (n > 0)
{
for (j = 0; j < n; j++)
{
for (i = 0; i < j; i++)
{
printf(" ");
}
printf("\\");
printf("\n");
}
}
else
{
printf("\n");
}
}
