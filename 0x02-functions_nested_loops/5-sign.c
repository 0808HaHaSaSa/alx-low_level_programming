#include <stdio.h>
#include <ctype.h>
#include <math.h>
int print_sign(int n)
{
if (n == 0)
{
printf("0");
return (0);
}
else
{
if (n > 0)
{
printf("+");
return (1);
}
else
{
printf("-");
return (-1);
}
}
}
