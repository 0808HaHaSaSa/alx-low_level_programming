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
unsigned int i;
tab = malloc(sizeof(char) * size);
if (tab == NULL)
exit(1);
for (i = 0; i < size; i++)
{
tab[i] = c;
}
return (tab);
}
