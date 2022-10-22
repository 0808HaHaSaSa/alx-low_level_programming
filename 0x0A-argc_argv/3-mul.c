#include <stdio.h>
#include <stdlib.h>
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
m = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", m);
}
return (0);
}
