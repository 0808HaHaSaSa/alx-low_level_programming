#include <stdio.h>
#include <string.h>
/**
**_strstr - locates a substring.
*@haystack:it the argument
*@needle:it argument
*description:locates a substring.
*Return:  always 0
*/
char *_strstr(char *haystack, char *needle)
{
char *d;
d = strstr(haystack, needle);
return (d);
}
