#include <stdio.h>
#include <ctype.h>
/**
*_isupper - checks for uppercase character
*@c : it is the argurment
*description:checks for uppercase character
*Return:  1 if character is uppercase else return 0
*/
int _isupper(int c)
{
int i;
i = isupper(c);
if (i == 0)
return (0);
else
return (1);
}
