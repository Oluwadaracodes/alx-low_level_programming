#include <stdio.h>
/**
 * main - 'prints all possible combinations
 * of single digit numbers'
 * Return: 0 always
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
