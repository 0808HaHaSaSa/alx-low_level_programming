#include <stdio.h>
#include <string.h>
/**
*rot13 - encodes a string using rot13
*@s:it the argument
*description: encodes a string using rot13
*Return:  always s
*/
char *rot13(char *s)
{
int i, j;
char a[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 53; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
}
}
}
return (s);
}
