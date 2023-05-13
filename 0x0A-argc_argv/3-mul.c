#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies 2 numbers
 * @argc: number of arguments
 * @argv: array of argc
 * Return: Always 0
 * if program does not take two arguments, print error and return 1
 */
int main(int argc, char *argv[])
{
	int num_1, num_2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);
	result = num_1 * num_2;

	printf("%d\n", result);
	return (0);
}
