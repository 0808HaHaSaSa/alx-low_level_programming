#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
***_calloc -  allocates memory for an array, using malloc
*@size:it the argument
*@nmemb:it the argument
*description:  allocates memory for an array, using malloc
*Return:  always 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *tab = NULL;
tab = calloc(nmemb, size * sizeof(unsigned int));
if (tab == NULL)
exit(98);
return (tab);
}
