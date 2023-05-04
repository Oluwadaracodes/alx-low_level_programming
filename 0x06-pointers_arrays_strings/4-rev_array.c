#include "main.h"

/**
 * reverse_array - 'function that reverses the content
 * of an array of integers'
 * @a: array
 * @n: number of elements of array
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int k, l;

	for (k = 0; k < n--; k++)
	{
		l = a[k];
		a[k] = a[n];
		a[n] = l;
	}
}
