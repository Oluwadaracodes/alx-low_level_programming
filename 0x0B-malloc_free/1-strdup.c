#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given as
 * a parameter
 * @str: the duplicated string
 * Return: pointer to duplicated string
 * if str = NULL, return NULL and also if there is insufficient memory
 */
char *_strdup(char *str)
{
	char *new_space;
	int a;
	int b = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	new_space = malloc(sizeof(char) * (a + 1));
	if (new_space == NULL)
	{
		return (NULL);
	}
	while (str[b])
	{
		new_space[b] = str[b];
		b++;
	}
	return (new_space);
}
