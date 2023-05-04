#include "main.h"

/**
 * leet - 'function that encodes a string into 1337'
 * @str: The string to be encoded
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	int a, b;

	for (a = 0; str[a]; a++)
	{
		b = 0;

		while (s1[b])
		{
			if (str[a] == s1[b])

				str[a] = s2[b];

			b++;
		}
	}
	return (str);
}
