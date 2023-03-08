#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns z n sqrt of no
 * @n: no to calc the natural sqrt
 *
 * Return: the n sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calc n sqrt root
 * @n: no to calc the sqrt
 * @i: iterate number
 *
 * Return: the n sqrt root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
