#include <stdio.h>
#include <string.h>
/**
***_strncat - concatenates two strings.
*@dest:it the argument
*@src:it the argument
* @n: it the argument
*description: concatenates two strings.
*Return:  always a string
*/
char *_strncat(char *dest, char *src, int n)
{
char *m;
m = strncat(dest, src, n);
return (m);

}
