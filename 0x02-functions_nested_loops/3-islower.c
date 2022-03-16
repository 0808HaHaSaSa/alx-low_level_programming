#include <stdio.h>
#include <ctype.h>
/**
 * test_islower - Teste la fonction _islower
 *
 * @n : nombre à transmettre à la fonction _islower
 */
int _islower(int c)
{
int i;
i = islower(c);
if (i == 0)
return (0);
else
return (1);
}
