#include <stdio.h>

/**
 * main - program prints all arguments passed to it
 * @argc: number of arguments
 * @argv: array of argc
 * Return: Always 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	:int a = 0;
 12
 13         while (a < argc)
 14         {
 15                 printf("%s\n", argv[a]);
 16                 a++;
 17         }
  return (0);}
