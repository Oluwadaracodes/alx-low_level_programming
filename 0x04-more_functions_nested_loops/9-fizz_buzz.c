#include <stdio.h>

/**
 * main - 'prints numbers from 1 to 100
 * for multiples of 3,prints fizz
 * prints buzz for multiples of 5
 * and fizzbuzz for multiples of 15
 * Return: 0 always
 */
int main(void)
{
	int a;

	a = 1;

	while (a <= 100)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
		a++;
	}

	printf("\n");
	return (0);
}
