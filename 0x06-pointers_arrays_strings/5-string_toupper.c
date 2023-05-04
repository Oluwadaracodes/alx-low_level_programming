#include "main.h"

/**
 * string_toupper - 'function that changes all
 * lowercase letters of a string to uppercase'
 * @a: pointer to character
 * Return:char a
 */
char *string_toupper(char *a)
{
	int k = 0;

	while (a[k] != '\0')
	{
		if (a[k] >= 'a' && a[k] <= 'z')
		{
			a[k] = a[k] - 32;
		}
		k++;
	}
	return (a);
}
