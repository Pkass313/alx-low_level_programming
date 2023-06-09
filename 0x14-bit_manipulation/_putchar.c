#include "main.h"
#include <unistd.h>
/**
 * _putchar - character c written to stdout
 * @c: character to be printed
 *
 * Return: Success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
