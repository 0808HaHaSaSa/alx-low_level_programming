#include <stdio.h>
#include <string.h>
/**
***_memcpy - copies memory area.
*@n:it the argument
*@dest:it argument
*@src:argument
*description: copies memory area.
*Return:  always 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d;
d = memcpy(dest, src, n);
return (d);
}
