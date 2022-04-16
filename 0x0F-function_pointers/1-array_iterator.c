#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
**array_iterator - executes a function .
*@size:it the argument
*@action:it the argument
*@array:argument
*description:function given as a parameter on each element of an array.
*Return:  always 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
for (i = 0; i < size; i++)
action(array[i]);
}
