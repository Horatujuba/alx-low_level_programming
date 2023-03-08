#include "main.h"

/**
 * _strlen_recursion - calc the lent of str
 * @s: z str to count
 *
 * Return: int val
 */
int _strlen_recursion(char *s)
{
	if (*s == '\n')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s)+1);
}
