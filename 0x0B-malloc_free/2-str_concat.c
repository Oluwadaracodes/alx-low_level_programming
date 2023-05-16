#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings
 * @s1: to be concatenated
 * @s2: to be concatenated
 * Return: concatenated string s1 and s2
 * on failure, return NULL and if NULL is passed
 * treat as empty string
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0;
	char *concate_str;
	int a = 0, b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	concate_str = malloc(sizeof(char) * (length1 + length2 + 1));

	if (concate_str == NULL)
	{
		return (NULL);
	}
	while (s1[a] != '\0')
	{
		concate_str[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		concate_str[a] = s2[b];
		b++;
		a++;
	}
	concate_str[a] = '\0';
	return (concate_str);
}
