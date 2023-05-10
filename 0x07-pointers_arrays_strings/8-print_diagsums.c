#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: pointer to an integer array
 * @size: size of the integer array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_1 = sum_1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum_2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
