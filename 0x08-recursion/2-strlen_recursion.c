#include "main.h"

/**
 * _strlen_recursion- a function that returns the length of a string
 * @s: string whose length is to be returned
 * Return: int length of string s
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s)
	{
		strlen++;
		strlen +=  _strlen_recursion(s + 1);
	}
	return (strlen);
}
