#include "main.h"

/**
 * print_line - 'draws a straight
 * line in the terminal'
 * @n: the number of times the character
 * - should be printed
 * Return:void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l;

		l = 1;
		while (l <= n)
		{
			_putchar('_');
			l++;
		}
		_putchar('\n');
	}
}
