#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

/**
 * test_islower - Teste la fonction _islower
 *
 * @n : nombre à transmettre à la fonction _islower
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
printf("98\n");
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
printf("98\n");
}
}
