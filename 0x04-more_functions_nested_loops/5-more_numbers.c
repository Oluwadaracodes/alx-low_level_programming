#include "main.h"

/**
 * more_numbers - 'prints 0 to 14
 * ten times folloed by a new line
 * Return: nothing
 */
void more_numbers(void)
{
	char c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
				_putchar('1');
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
