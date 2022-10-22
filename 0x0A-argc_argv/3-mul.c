#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *@argc:argument
 *@argv:argumeent
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(int argc, char *argv[])
{
int m;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
m =int ((*argv[1]) * (*argv[2]));
printf("%d", m);
printf("\n");
return (0);
}
}
