#include <stdio.h>
/**
*print_triangle - draws a straight line in the terminal
*@size:it the argument
*description:draws a straight line in the terminal
*Return:  always 0
*/
void print_triangle(int size)
{
int j, i;
if (size > 0)
{
for (j = 1; j <= size; j++)
{
for (i = 1; i <= size - j; i++)
{
printf(" ");
}
for (i = 0; i < j; i++)
{
printf("#");
}
printf("\n");
}
}
else
{
printf("\n");
}
}
