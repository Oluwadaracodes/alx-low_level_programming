#include "main.h"

/**
 * print_most_numbers - 'as the name suggests
 * it prints most numbers from 0 to 9
 * but excludes 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	char c;

	c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
