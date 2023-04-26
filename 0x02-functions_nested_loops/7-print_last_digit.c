#include "main.h"

/**
 * print_last_digit - 'prints the last digit of a number'
 * @a: number to be returned
 * Return: last digit of a
 */
int print_last_digit(int a)
{
	int b = a % 10;

	if (b < 0)
	{
		_putchar(-b + '0');
		return (-b);
	}
	else
	{
		_putchar(b + '0');
		return (b);
	}
}
