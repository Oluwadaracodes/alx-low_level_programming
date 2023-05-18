#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -function that allocates memory using malloc
 * @b: number of bytes to allocates
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails,cause normal process termination and
 * status value equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
