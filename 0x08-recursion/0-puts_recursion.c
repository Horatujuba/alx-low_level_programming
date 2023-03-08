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
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
	_putchar('\n');
}
