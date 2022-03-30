#include <stdio.h>
#include <string.h>
/**
**factorial -  the factorial of a given number.
*@n:it the argument
*description:  the factorial of a given number.
*Return:  always the factorial
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n > 0)
{
return (n * factorial(n - 1));
}
else
{
return (1);
}
}
