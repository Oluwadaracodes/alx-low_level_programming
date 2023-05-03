 #include "main.h"
/**
 * puts_half - 'function that prints
 * second-half of a string,followed by a new line
 * if the number of characters is odd, the function
 * should print the last n characters of the string
 * where n = (length_of_the_string - 1) / 2'
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int l, n;

	int length = 0;

	for (l = 0; str[l] != '\0'; l++)
	{
		length++;
	}

	n = length / 2;

	if ((length % 2) == 1)
	{
		n = ((length + 1) / 2);
	}

	for (l = n; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
