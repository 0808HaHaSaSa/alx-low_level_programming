#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
int i;
for (i = 48; i < 57; i++)
{
putchar(i);
putchar(',');
putchar('  ');
}
putchar(57);
return (0);
}

