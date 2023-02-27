#include "main.h"

/**
 * _puts - Prints a str
 * @str: The string to print
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
_pu:w:wr(*str);
	}
	_putchar('\n');
}
