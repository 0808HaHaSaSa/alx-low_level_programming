#include "main.h"
#include <stdio.h>

/**
**print_alphabet_x10 - entry point
*Description: it prints alphabets in lowercase
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{/* print the alphabet *10 */
char A;
int i;
for (i = 0; i < 10; i++)
{
for (A = 'a'; A <= 'z'; A++)
printf("%c", A);
printf("\n");
}
}
