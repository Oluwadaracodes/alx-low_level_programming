#include "main.h"

/**
 * _isdigit - 'checks to see if a character
 * is a digit'
 * @c: character to be checked
 * Return: 1 if c is a digit
 * Otherwise 0 is returned
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
