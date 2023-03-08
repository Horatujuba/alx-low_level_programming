#include "main.h"

/**
 * _pow_recursion - Return z val of x p y
 * @x: z val 2 mul
 * @y: z times to mul
 *
 * Return: z val of mul y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
