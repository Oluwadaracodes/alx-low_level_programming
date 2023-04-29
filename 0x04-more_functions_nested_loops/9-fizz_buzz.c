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

	for (a = 1; a <= 100; a++)
	{
		if (a % 5 && a % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			if (a == 100)
			{
				printf("%d", a);
			}
			else
			{
				printf("%d ", a);
			}
		}
	}
	return (0);
}
