#include "main.h"
#include <stdio.h>
int check_prime(int n, int i);

/**
 * is_prime_number - Return 1 if p and ret 0 if noy
 * @n: z no to be che
 *
 * Return: int
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if n is p
 * @n: zn 2b ckd
 * @i: z it
 *
 * Return: 1 4 p or 0 4 com
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	return (0);
	if (n % i == 0 && i > 1)
	return (0);
	if ((n / i) < i)
	return (1);
	return (check_prime(n, i + 1));
}
