#include <stdio.h>
/**
 * main - 'prints the alphabet in lowercase'
 *
 * Return: 0 always
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
