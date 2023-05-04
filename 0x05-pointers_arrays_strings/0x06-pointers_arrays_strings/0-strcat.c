#include <string.h>
#include "main.h"

/**
 * _strcat - 'function that concatenates
 * two strings and ends with null character'
 * @dest: destination string
 * @src: source string to be appended
 * Return:pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int length_1;
	int length_2, a;

	length_1 = strlen(dest);
	length_2 = strlen(src);

	for (a = 0; a <= length_2; a++)
	{
		dest[length_1 + a] = src[a];
	}
	return (dest);
}
