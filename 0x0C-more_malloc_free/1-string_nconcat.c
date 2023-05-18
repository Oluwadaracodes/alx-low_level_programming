#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1:string 1
 * @s2: string 2
 * @n: first bytes of s2
 * Return: pointer to newly allocated space in memory
 * containing s1 and the first n bytes of s2
 * if failed,return null
 * If n is greater or equal to the length of s2
 * then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *outcome;
	unsigned int len1 = 0, len2 = 0, a, b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n > len2)
	{
		n = len2;
	}
	a = len1 + n;
	outcome  = malloc(a + 1);

	if (outcome == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		if (b < len1)
		{
			outcome[b] = s1[b];
		}
		else
		{
			outcome[b] = s2[b - len1];
		}
	}
	outcome[b] = '\0';
	return (outcome);
}
