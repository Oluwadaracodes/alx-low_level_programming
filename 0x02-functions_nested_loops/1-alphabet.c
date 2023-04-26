#include "main.h"

/**
 * print_alphabet - 'prints alphabet in lowercase
 * to stdout
 * Return:0 always
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
