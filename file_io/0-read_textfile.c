#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file path to read
 * @letters: count of character to read
 *
 * Return: count of written bytes, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t number_of_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	number_of_bytes = read(fd, buffer, letters);
	close(fd);
	if (number_of_bytes == -1)
	{
		free(buffer);
		return (0);
	}
	number_of_bytes = write(STDOUT_FILENO, buffer, number_of_bytes);
	free(buffer);
	if (number_of_bytes == -1)
		return (0);
	return (number_of_bytes);
}
