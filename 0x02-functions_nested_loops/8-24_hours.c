#include "main.h"

/**
 * jack_bauer - 'prints every minute of the
 * day of Jack Bauer starting from 00:00 to 23:59
 * Return: nothing
 */
void jack_bauer(void)
{
	int j, a, c, k;

	for (j = 0; j <= 2; j++)
	{
		for (a = 0; a <= 9; a++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (k = 0; k <= 9; k++)
				{
					if (j >= 2 && a >= 4)
						break;
					_putchar(j + '0');
					_putchar(a + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(k + '0');
					_putchar('\n');
				}
			}

		}
	}
}
