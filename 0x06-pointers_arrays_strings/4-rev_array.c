#include <stdio.h>
#include <string.h>
/**
**reverse_array - compares two strings.
*@a:it the argument
*@n:it the argument
*description: compares two strings.
*Return:  always 0
*/
void reverse_array(int *a, int n)
{
int i, m;
for (i = 0; i < n / 2; i++)
{
m = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = m;
}
}
