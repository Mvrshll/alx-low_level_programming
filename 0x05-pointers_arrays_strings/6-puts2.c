#include "main.h"

/**
 * puts2 - prints everyother character of a string
 * @str: the string used in reference
 * Return: 0
 */

void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
