#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
**int_index- executes a function .
*@size:it the argument
*@cmp:it the argument
*@array:argument
*description:searches for an integer.
*Return:  always 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i, n;
if (size <= 0)
{
return (-1);
}
else
{
for (i = 0; i < size; i++)
{
n = cmp(array[i]);
if (n != 0)
{
return (i);
}
}
return (-1);
}
}
