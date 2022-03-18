#include <stdio.h>
/**
*print_square - draws a straight line in the terminal
*@size:it the argument
*description:draws a straight line in the terminal
*Return:  always 0
*/
void print_square(int size)
{
int j, i;
if (size > 0)
{
for (j = 0; j < size; j++)
{
for (i = 0; i < size; i++)
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
