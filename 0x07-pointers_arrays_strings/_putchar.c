#include "main.h"
#include <unistd.h>

/**
 * _putchar.c - writes character c to std out
 * @c: the cahracter to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
