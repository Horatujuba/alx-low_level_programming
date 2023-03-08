#include "main.h"

/**
 * factorial - calc z fact
 * @n: z no 2 calc the fact
 *
 * Return: integer value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
