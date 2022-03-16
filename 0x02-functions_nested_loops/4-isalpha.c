#include <stdio.h>
#include <ctype.h>
int _isalpha(int c)
{
    int i;
    i=isalpha(c);
    if(i==0)
    return 0;
    else
    return 1;
}
void _putchar(int c)
{
    putchar(c);
}
