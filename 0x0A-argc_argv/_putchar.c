#include <stdio.h>
#include "main.c"

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error and errno in set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
