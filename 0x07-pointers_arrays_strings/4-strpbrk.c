#include <stdio.h>
#include <string.h>
/**
**_strpbrk - searches a string for any of a set of bytes.
*@accept:it the argument
*@s:it argument
*description: searches a string for any of a set of bytes.
*Return:  always 0
*/
char *_strpbrk(char *s, char *accept)
{
char *d;
d = strpbrk(s, accept);
return (d);
}
