#include <stdio.h>
#include <string.h>
/**
**string_toupper - compares two strings.
*@str:it the argument
*description: compares two strings.
*Return:  always 0
*/
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}
