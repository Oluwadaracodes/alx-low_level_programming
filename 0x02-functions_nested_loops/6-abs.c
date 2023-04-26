#include "main.h"

/**
 * _abs - 'prints the absolute value of integer'
 * that is the distance between the integer and 0
 * @a: is the integer to return
 * Return: absolute value
 */
int _abs(int a)
{
	if (a >=  0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
