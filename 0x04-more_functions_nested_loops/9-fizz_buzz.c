#include <stdio.h>
/**
*main - draws a straight line in the terminal
*
*description:draws a straight line in the terminal
*Return:  always 0
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
if (i % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("Fizz ");
}
}
else
{
if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
}
printf("\n");
return (0);
}
