#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * prints the result followed by a new line
 * @argc: number of arguments
 * @argv: array of argc
 * Return: 0 if no number is stored
 * if one of the numbers are other symbols asides digits
 * print error and return 1
 */
int main(int argc, char *argv[])
{
	int total = 0;
	int a, b, num;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[a]);
		if (num <= 0)
		{
			continue;
		}
		total += num;
	}
	printf("%d\n", total);
	return (0);
}

