#include <stdio.h>
#include <string.h>
/**
**_strspn - locates a character in a string.
*@accept:it the argument
*@s:it argument
*description: locates a character in a string.
*Return:  always 0
*/
unsigned int _strspn(char *s, char *accept)
{
int d;
d = strspn(s, accept);
return (d);
}
