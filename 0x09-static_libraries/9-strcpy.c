#include <stdio.h>
#include "main.h"

/**
 * _strcpy - 'function that copies the string
 * pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest'
 * of integers, followed by a new line'
 * @dest: character to copy tp
 * @src: character to copy from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
