#include <stdio.h>
#include "main.h"

/**
 * print_array - ' prints n elements of an array
 * of integers, followed by a new line'
 * @a: pointer to an integer
 * @n: number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int m = 0;

	while (m < n)
	{
		printf("%d", a[m]);

		if (m < (n - 1))
		{
			printf(", ");
		}
		m++;
	}
	printf("\n");
}
