#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ak;
	ssize_t readout, writeout;
	char *buffer;

	if (filename == NULL)
		return (0);
	ak = open(filename, O_RDONLY);
	if (ak == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(ak);
		return (0);
	}
	readout = read(ak, buffer, letters);
	close(ak);
	if (readout == -1)
	{
		free(buffer);
		return (0);
	}
	writeout = write(STDOUT_FILENO, buffer, readout);
	free(buffer);
	if (readout != writeout || writeout == -1)
	{
		return (0);
	}
	return (writeout);
}
