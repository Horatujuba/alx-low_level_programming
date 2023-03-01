#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatinate two strings
 * @dest: The distina str
 * @src: z source str
 * Return: A pointer to the resulting str dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;
	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen ++;
	}
	
	dest[dlen] = '\0';
	return (dest);
}
