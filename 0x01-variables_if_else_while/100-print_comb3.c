#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
for (j = 48; j < 58; j++)
{
if (j > i)
{
putchar(i);
putchar(j);
if (i != 56)
{
putchar(',');
putchar(32);
}
}
}
putchar('\n');
return (0);
}
