#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the charaecter C to stdout
 * @c: The character to print 
 *
 * Return: Successful (1).
 * On Error, -1 is returned, and error is set appropiately
 */

int _putchar(char c )
{
	return(write(1, &c, 1));
}
