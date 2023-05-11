#include "main.h"

/**
 * factorial -  function that returns the factorial of a given number
 * @n: given number in question
 * Return: factorial of n
 * If n is lower than 0, return -1 to indicate error
 * the factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
