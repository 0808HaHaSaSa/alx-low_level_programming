#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Teste la fonction _isalpha
 *
 * c : nombre à transmettre à la fonction _isalpha
 */
int _isalpha(int c)
{
int i;
i = isalpha(c);
if (i == 0)
return (0);
else
return (1);
}

