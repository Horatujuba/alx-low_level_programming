#include <stdio.h>

/**
 *  _strlen - Return l of a string
 *  @str: The str to get z length of
 *  Return: The len of @str.
 */

size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
