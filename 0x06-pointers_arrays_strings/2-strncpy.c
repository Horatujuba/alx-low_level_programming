#include "main.h"

/**
 * _srtncpy - copies inputted no
 * of bytes from str src into dest
 * @dest: z buffer storing the string copy
 * @src: the source string
 * @n: z max no of bytes to copied from src
 * Return: a pointer to the resulting sring dest
 *
 */

char *_strncpy(char *dest, char *src, int n)

{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
