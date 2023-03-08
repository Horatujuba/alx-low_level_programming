#include "main.h"

/**
 * _puts_recursion - print a str followed by n line
 * @s: the str to print
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
