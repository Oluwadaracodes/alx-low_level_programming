#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the start of memmory area to be set
 * @b: value that memory is to be set to
 * @n: number of bytes of memory to be set
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
