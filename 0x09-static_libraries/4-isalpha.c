#include "main.h"

/**
 * _isalpha - 'checks for alphabetic character; lowercase or uppercase'
 * @c: the charcter to be checked using the ASCII table
 * Return: On success 1
 * otherwise 0 is returned
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122)
		|| (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
