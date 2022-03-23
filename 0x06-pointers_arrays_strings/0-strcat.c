#include <stdio.h>
#include <string.h>
/**
**_strcat - concatenates two strings.
*@dest:it the argument
*@src:it the argument
*description: concatenates two strings.
*Return:  always a string
*/
char *_strcat(char *dest, char *src)
{
char *n;
n = strcat(dest, src);
return (n);

}
