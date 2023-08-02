#include "main.h"

/**
 *_put_recursion - writethat printa string, also followed by a new line
 *@s: This is the input string
 *Return:nothing to return 
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
