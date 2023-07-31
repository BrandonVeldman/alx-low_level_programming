#include "main.h"

/**
 *_strspn - print the consecutive characters of s1 that are in s2
 *@s: Source string
 *@accept: searching string
 *Return: new string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
	for (i = 0; *(s + j);  i++)
		{
	if (*(s + j) == *(accept + i))
			break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}
