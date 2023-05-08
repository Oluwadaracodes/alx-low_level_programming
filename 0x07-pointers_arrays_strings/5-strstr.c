#include "main.h"

/**
 * _strstr - function finds the first occurrence of the
 * substring needle in the string haystack
 *@needle: substring to be located
 *@haystack: string to be searhed
 *Return:pointer to the beginning of the located substring
 *or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*b != '\0' && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
