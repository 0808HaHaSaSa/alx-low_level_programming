#include <stdio.h>
/**
*swap_int - swaps the values of two integers
*@a:it the argument
*@b:it the argument
*description:swaps the values of two integers
*Return:  always 0
*/
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
