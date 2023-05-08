#include "main.h"
/**
 * _strpbrk - function that locates the first occurrence in the string s
 * of any of the bytes in string accept
 * @s:string to be searched
 * @accept:string to be searched for
 * Return: Returns a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (0);
}
