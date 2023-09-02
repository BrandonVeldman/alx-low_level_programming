#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c:The character to point
 *
 * Return: on success 1.
 * om error, -1 is Returned, and on errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c,1));
}
