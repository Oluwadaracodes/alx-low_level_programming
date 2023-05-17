#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest:destination of copied memory area
 * @src: source of copied memory area
 * @n: number of bytes of memory to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = dest;
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*s++ = *src++;
	}
	return (dest);
}
