#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: bytes of each elements
 * Return: pointer to allocated space in memory
 * If nmemb or size is 0, then _calloc returns NULL
 * if malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);

	if (a == NULL)
	{
		return (NULL);
	}
	while (b < (nmemb * size))
	{
		a[b] = 0;
		b++;
	}
	return (a);
}
