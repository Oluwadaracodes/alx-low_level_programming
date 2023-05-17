#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s:characters to be searched
 * @c:set of characters to be searched for
 * Return:first occurence of character c in the string s or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int  a = 0;

	while (s[a] >= '\0')
	{
		if (s[a] == c)
			return (&s[a]);
		a++;
	}
	return (0);
}
