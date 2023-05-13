#include <stdio.h>

/**
 * main - program prints its own name followed by a new line
 * @argc: number of arguments
 * @argv: array of argc
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
