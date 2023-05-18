#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum int value
 * @max: maximum int value
 * Return: pointer to the newly created array
 * if min > max, returns null
 * if malloc fails, returns null
 */
int *array_range(int min, int max)
{
	int *a;
	int b = 0;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		a[b] = min;
		b++;
		min++;
	}
	return (a);
}
