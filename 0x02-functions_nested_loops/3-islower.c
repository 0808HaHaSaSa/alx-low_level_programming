#include <stdio.h>
#include <ctype.h>
/**
 **_islower - Teste la fonction _islower
 *
 *@c: nombre à transmettre à la fonction _islower
 *description: function that checks for lowercase character.
 *Return: always 0 or 1
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
