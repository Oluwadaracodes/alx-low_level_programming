#include "main.h"

/**
 * print_sign - 'prints the sign of a number'
 * prints + if number is greater than 0
 * prints 0 if number is 0
 * prints - if number is less than 0
 * @n: the number to print
 * Return: 1 if n is greater than 0
 * If n is 0 return 0 and -1 if n is
 * less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
