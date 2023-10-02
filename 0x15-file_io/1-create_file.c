#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - A function with two arguments
 * @filename: pointer to a string name
 * @text_content: pointer to string contents
 *
 * Description: creates file
 * Return: 1 on success or -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int ak = 0;
	int output = 0;

	if (filename == NULL)
		return (-1);

	ak = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (ak == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
	{
		close(ak);
		return (1);
	}

	output = write(ak, text_content, count);
	if (output == -1 || output != count)
		return (-1);

	close(ak);
	return (1);
}
