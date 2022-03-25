#include <stdio.h>
#include <string.h>
/**
**_strncpy - copies a string.
*@dest:it the argument
*@src:it the argument
* @n:it the argument
*description: copies a string.
*Return:  always a string
*/
char *_strncpy(char *dest, char *src, int n)
{
char *m;
m = strncpy(dest, src, n);
return (m);

}
