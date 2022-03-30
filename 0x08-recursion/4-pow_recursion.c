#include <stdio.h>
#include <string.h>
#include <math.h>
/**
**_pow_recursion -   the value of x raised to the power of y.
*@y:it the argument
*@x:it the argument
*description:  the value of x raised to the power of y.
*Return:  always the raised to the power
*/
int _pow_recursion(int x, int y)
{
int i;
if (y < 0)
return (-1);
else
i = pow(x, y);
return (i);
}
