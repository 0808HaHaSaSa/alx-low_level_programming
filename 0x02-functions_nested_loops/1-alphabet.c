#include "main.h"
#include <stdio.h>
void print_alphabet(void)
{
char A;
for (A = 'a'; A <= 'z'; A++)
printf ("%c", A);
printf("\n");
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
print_alphabet();
return (0);
}
