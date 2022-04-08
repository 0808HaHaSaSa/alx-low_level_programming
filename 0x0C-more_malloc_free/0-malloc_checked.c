#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
****malloc_checked - creates an array of chars
*@b:it the argument
*description: initializes it with a specific char.
*Return:  always 0
*/
void *malloc_checked(unsigned int b)
{
int *tab = NULL;
tab = (char *) malloc(b);
if (tab == NULL)
exit(98);
return (tab);
}
