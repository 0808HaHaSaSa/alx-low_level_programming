#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
***array_range -  creates an array of integers.
*@min:it the argument
*@max:it the argument
*description:  creates an array of integers.
*Return:  always 0
*/
int *array_range(int min, int max)
{
int *tab = NULL;
int s = 0, i;
s = (max - min);
if (s >= 0)
{
s = s + 1;
tab = malloc(s *sizeof(int));
tab[0] = min;
for (i = 1; i < s; i++)
{
tab[i] = tab[i - 1] + 1;
}
return (tab);
}
else
{
return (NULL);
}
if (tab == NULL)
return (NULL);
}
