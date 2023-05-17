#include "main.h"
/**
 * _strncpy - 'function that copies
 * a string'
 * @dest: destination string
 * @src: source string to be copied
 * @n: maximum number to be copied from src
 * Return:pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
