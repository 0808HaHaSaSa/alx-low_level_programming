#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
int i;
i=islower(c);
if(i==0)
return 0;
else
return 1;
}
