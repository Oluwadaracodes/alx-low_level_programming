#include "main.h"

/**
 * _islower - 'checks for lowercase character'
 * @c: the charcter to bu checked using the ASCII table
 * Return: On success 1
 * otherwise 0 is returned
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
