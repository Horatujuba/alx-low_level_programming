#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: the first int to be swapped
 * @b: The second int to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
