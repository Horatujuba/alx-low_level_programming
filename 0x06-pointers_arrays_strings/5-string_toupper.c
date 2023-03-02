#include "main.h"

/**
 * string_toupper - change all lowercase 
 * of a string to uppercase
 * @str: z string to be chabged
 * Return: A pointer 2 z changed string
 *
 */

char *string_toupper(char *str)

{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
