 #include "main.h"
/**
 * rev_string - 'function that reverses a string
 * in reverse followed by a new line
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	char *r = s;
	char *t = s;
	char u;

	while (*t != '\0')
	{
		t++;
	}
	t--;

	while (r < t)
	{
		u = *r;
		*r = *t;
		*t = u;
		r++;
		t--;
	}
}
