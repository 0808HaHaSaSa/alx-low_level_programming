#include <stdio.h>
#include <string.h>
/**
***cap_string - capitalizes all words of a string.
*@str:it the argument
*description: capitalizes all words of a string.
*Return:  always 0
*/
char *cap_string(char *str)
{
int i;
if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] = str[0] - 32;
}
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
{
str[i] = str[i] - 32;
}
else if (str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?')
{
str[i] = str[i] - 32;
}
else if (str[i - 1] == ';' || str[i - 1] == ',' || str[i - 1] == '"')
{
str[i] = str[i] - 32;
}
else if (str[i - 1] == '{' || str[i - 1] == '}')
{
str[i] = str[i] - 32;
}
else if (str[i - 1] == '(' || str[i - 1] == ')')
{
str[i] = str[i] - 32;
}
}
}
return (str);
}
