#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destnation value
 * @src: source value
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
/*	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	*/

	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[0] = src[x];
	}
	dect[l] = '\0';
	Return (dest);
}
