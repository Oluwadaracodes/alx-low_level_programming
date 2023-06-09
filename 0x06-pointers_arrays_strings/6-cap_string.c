#include "main.h"

/**
 * cap_string - 'function that capitalizes
 * all words of a string'
 * @str: string to be capitalized
 * Return:pointer to capitalized string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (index == 0 ||
			str[index - 1] == ' '  ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ','  ||
			str[index - 1] == ';'  ||
			str[index - 1] == '.'  ||
			str[index - 1] == '!'  ||
			str[index - 1] == '?'  ||
			str[index - 1] == '"'  ||
			str[index - 1] == '('  ||
			str[index - 1] == ')'  ||
			str[index - 1] == '{'  ||
			str[index - 1] == '}')
		{
			str[index] -= 32;
		}

		index++;
	}
	return (str);
}
