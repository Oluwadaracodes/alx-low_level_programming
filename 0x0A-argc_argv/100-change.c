#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money.
 * if the number passed as the argument is negative
 * print 0, followed by a new line
 * @argc: number of arguments
 * @argv: array of argc
 * Return: cents
 * if the number of arguments passed is not exactly 1
 * print error, followed by a new line and return 1
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int no_of_coins = 0;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (a < 5)
	{
		no_of_coins += cents / coins[a];
		cents %= coins[a];
		a++;
	}
	printf("%d\n", no_of_coins);
	return (0);
}
