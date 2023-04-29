#include "main.h"

/**
 * print_square- 'prints a square
 * followed by a new line'
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int t;
		int u;

		for (t = 0; t < size; t++)
		{
			for (u = 0; u < size; u++)

				_putchar('#');

			_putchar('\n');
		}
	}
}
