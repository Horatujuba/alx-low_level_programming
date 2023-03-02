#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: a pointer to first
 * @s2: a pointer to sec string
 * return: if str1 < str2, the negative d/c
 * if str1 == str2, 0.
 * if str1 > str2, +ve d/c
 *
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
