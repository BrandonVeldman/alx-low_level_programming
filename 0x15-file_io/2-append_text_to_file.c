#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - function with two arguments
 * @filename: pointer to name of file
 * @text_content: pointer to string content
 *
 * Description: function that appends to text at the end of a file
 * Return: 1 on success or -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count = 0;
	int output = 0;
	int ak = 0;

if (filename != NULL)
ak = open(filename, O_WRONLY | O_APPEND);
else
return (-1);
if (ak == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[count] != '\0')
count++;
}
else
return (1);

output = write(ak, text_content, count);
if (output == -1)
return (-1);
close(ak);
return (1);
}
