#include "main.h"
/**
 *_memset - the _memset() function fills
 * the first n byte of the memory of area
 * @s: A Target
 * @b: constant byte
 * @n: the number of byte
 * Return: New value of target to be Return.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
