#include <stdio.h>
#include <string.h>
/**
***_memset - fills memory with a constant byte.
*@n:it the argument
*@b:it argument
*@s:argument
*description: fills memory with a constant byte.
*Return:  always 0
*/
char *_memset(char *s, char b, unsigned int n)
{
char *d;
d = memset(s, b, n);
return (d);
}
