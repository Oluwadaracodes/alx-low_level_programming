#include "main.h"

/**
 *  _isupper - 'checks for uppercase character'
 *  @c: integer to be checked
 *  Return: 1 if c is in uppercase
 *  Otherwise 0 is returned
 */
int _isupper(int c)
{
	if (c >= 65 &&  c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
