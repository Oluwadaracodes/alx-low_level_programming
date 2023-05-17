#include "main.h"

/**
 * _strncat - 'function that concatenates
 * two strings'
 * @dest: destination string
 * @src: source string to be appended
 * @n: maximum number of bytes to be used from src
 * Return:pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
