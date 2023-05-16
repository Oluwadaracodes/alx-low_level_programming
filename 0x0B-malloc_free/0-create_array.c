#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: intitialized char
 * Return: NULL if size == 0
 * If it fails, return a pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array_of_chars;
	unsigned int a = 0;

	if (size == 0)
	{
		return (NULL);
	}
	array_of_chars = malloc(sizeof(char) * size);

	if (array_of_chars == NULL)
	{
		return (NULL);
	}
	while (a < size)
	{
		array_of_chars[a] = c;
		a++;
	}
	return (array_of_chars);
}
