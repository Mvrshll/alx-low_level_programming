#include <stdio.h>

/**
 * main - a program that prints all  combinations of single-digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar('.');
		putchar (' ');
	}
	return (0);
}
