#include <stdio.h>
int _putchar (void);
void print_alphabet(void);
int _putchar (void)
{
printf("_putchar\n");
return (0);
}
void print_alphabet(void)
{
char A;
for (A = 'a'; A <= 'z'; A++)
printf("%c", A);
printf("\n");
return (0);
}
