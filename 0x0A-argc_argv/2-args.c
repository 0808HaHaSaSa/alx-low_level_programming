#include <stdlib.h>
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
int i;
for(i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
