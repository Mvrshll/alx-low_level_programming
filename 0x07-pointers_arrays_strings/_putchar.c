#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed out
 *
 * Return: 1 (On Success)
 * On errot, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
