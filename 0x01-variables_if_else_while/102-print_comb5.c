#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
int i, j, m, n;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (m = 48; m < 58; m++)
{
for (n = 48; n < 58; n++)
{
if ((m + n) > (j + i))
{
putchar(i);
putchar(j);
putchar(32);
putchar(m);
putchar(n);
if (j != 57)
{
putchar(',');
putchar(32);
}
}
}
}
}
}
putchar('\n');
return (0);
}
