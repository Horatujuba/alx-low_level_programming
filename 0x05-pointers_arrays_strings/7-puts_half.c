#include "main.h"

/**
 * puts_half - prints 1/2 of strg
 * @str: z strg 2 printed
 * Return: void
 * */

void puts_half(char *str)

{
	int j = 0;
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

	for(; k < j; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
