#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - prints the sum of the two diagonals for a square matrix
 * of integers
 * @a: array name
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, b, m;
unsigned int j = 0, k = 0;
for (i = 0; i < size; i++)
{
for (b = 0; b < size; b++)
{
if (i == b)
j = j + (*((int *) a + size * b + i));
}
}
for (m = 0; m < size; m++)
{
k = k + (*((int *) a + m * size + (size - 1 - m)));
}
printf("%d, %d\n", j, k);
}
