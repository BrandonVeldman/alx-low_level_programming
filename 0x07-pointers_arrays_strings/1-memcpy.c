#include "main.h"

/**
 *_memcpy - The _memcpy() function copies n byte
 *from memory area to src to memory area of destionation
 *@dest: area where bytes are copied to
 *@src: area where bytes are copeid form
 *@n: number of bytes to copy
 *
 * Return: Return a pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
		dest[i] = src[i];
return (dest);
}
