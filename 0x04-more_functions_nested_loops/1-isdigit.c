#include <stdio.h>
#include <ctype.h>
/**
*_isdigit - checks for a digit
*@c : it is the argurment
*description:checks for a digit (0 through 9).
*Return:  1 if character is digit else return 0
*/
int _isdigit(int c)
{
int i;
i = isdigit(c);
if (i == 0)
return (0);
else
return (1);

}
