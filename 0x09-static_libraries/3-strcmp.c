#include "main.h"

/**
 * _strcmp - 'function that compares two strings and
 * @ returns an integer less than, equal to or greater
 * than 0'
 * @s1: string to be compared
 * @s2: string to be compared
 * Return:int les than, equal to or greater than 0
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s1[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
