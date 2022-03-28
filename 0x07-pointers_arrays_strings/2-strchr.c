#include <stdio.h>
#include <string.h>
/**
***_strchr - locates a character in a string.
*@c:it the argument
*@s:it argument
*description: locates a character in a string.
*Return:  always 0
*/
char *_strchr(char *s, char c)
{
char *d;
d = strchr(s, c);
return (d);
}
