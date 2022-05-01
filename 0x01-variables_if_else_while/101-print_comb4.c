#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
int i, j, z;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (z = 48; z < 58; z++)
{
if (z > j > i)
{
putchar(i);
putchar(j);
putchar(z);
if (i != 55)
{
putchar(',');
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}
