#include "main.h"

/**
 * print_rev - 'function that prints a string
 * in reverse followed by a new line
 * @s: string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}
	_putchar('\n');
}
