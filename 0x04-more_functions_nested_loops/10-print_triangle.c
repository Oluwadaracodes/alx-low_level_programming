#include "main.h"

/**
 * print_triangle - 'prints a triangle
 * followed by a new line'
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a, b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size - a; b++)
		{
			_putchar(' ');
		}

		for (c = 1; c <= a; c++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
