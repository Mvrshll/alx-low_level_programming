#include "main.h"

/**
 * swap_int - takes in two variable integers and swaps them
 * @a: swaps and stores address of b
 * @b: swaps and stores address of b
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
