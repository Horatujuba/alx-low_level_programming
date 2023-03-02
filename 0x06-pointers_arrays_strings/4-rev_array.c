#include "main.h"

/**
 * reverse_array - reverse the con of an array
 * @a: z array of int to be rev
 * @n: z no of elm in array
 *
 */

void reverse_array(int *a, int n)

{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
