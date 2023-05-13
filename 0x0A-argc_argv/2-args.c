#include <stdio.h>

/**
 * main - program prints all arguments passed to it
 * @argc: number of arguments
 * @argv: array of argc
 * Return: Always 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
