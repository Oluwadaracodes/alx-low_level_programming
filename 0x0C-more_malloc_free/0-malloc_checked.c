#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: int to allocate memory for
 * Return: pointer to allocated memory
 * if failed, cause normal process termination with a status
 * value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
