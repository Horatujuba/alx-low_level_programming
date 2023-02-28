#include "main.h"


/**
 * puts_half - prints half of strg
 * @str: The sring two printed
 * Return: void
 */

void puts_half(char *str)

{
	/*  j = 0;
	int k;

	while (str[j] != '\n')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}

	for (; k < j; k++)
	{
	_putchar(str[k]);
	}*/
	int a, n, i;

	i = 0;

	for (a = 0; str[a] != '\0'; a++)
		i++;

	n = (i / 2);

	if ((i % 2) == 1)
		n = ((i + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
