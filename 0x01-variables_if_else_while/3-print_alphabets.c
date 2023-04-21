#include <stdio.h>
/**
 * main - 'prints alphabet in lower and upper case'
 *
 * Return: 0 always
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}

	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
