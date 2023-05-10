#include "main.h"

/**
 * print_chessboard - function that prints chessboard
 * @a: 2-dimensional chracter array represemting rows and columns
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int f = 0;
	int g = 0;

	while (f < 8)
	{
		while (g < 8)
		{
			_putchar(a[f][g]);
			g++;
		}
		_putchar('\n');
		f++;
		g = 0;
	}
}
