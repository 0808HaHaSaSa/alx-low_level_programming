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
char texte[10] = "0123456789";
for (i = 0; i < 10; i++)
putchar(texte[i]);
putchar('\n');
return (0);
}
