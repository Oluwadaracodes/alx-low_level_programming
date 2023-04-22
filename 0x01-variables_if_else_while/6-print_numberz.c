#include <stdio.h>
/**
 * main - 'prints single digits in base ten'
 *
 * Return: 0 always
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		putchar(a + 48);
	putchar('\n');
	return (0);
}
