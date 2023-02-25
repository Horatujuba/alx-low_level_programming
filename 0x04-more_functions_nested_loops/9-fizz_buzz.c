#include "main.h"

/**
 * main - prints the number 1 t0 100, followed by new line
 * but for multiples of three prints fizz instead of num 
 * and for the multiple of 5 print buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i =1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 !=0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0 )
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 ==0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else 
		{ 
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
