#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
***create_array - creates an array of chars
*@size:it the argument
*@c:it the argument
*description: initializes it with a specific char.
*Return:  always 0
*/
char *create_array(unsigned int size, char c)
{
char *tab = NULL;
tab = malloc(sizeof(char) * size);
unsigned int i;
for (i = 0; i < size; i++)
{
tab[i] = c;
}
return (tab);
}
