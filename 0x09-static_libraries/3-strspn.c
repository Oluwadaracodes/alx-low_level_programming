#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s:string to be searched
 * @accept:string containing characters to be searched for
 * Return:number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int  a = 0;

	while (*s != '\0')
	{
		char *b = accept;

		while (*b != '\0')
		{
			if (*s == *b)
			{
				a++;
				break;
			}
		b++;
		}
		if (*b == '\0')
		{
			break;
		}
		s++;
	}
	return (a);
}
