#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * err_97 - executing when the number of argument is not the correct one
 *
 * Return: void
 */
void err_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * err_98 - executing when file does not exist or can not be read
 * @filename: path to file
 *
 * Return: void
 */
void err_98(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * err_99 - executing when file can not be created or written to another file
 * @filename: path to file
 *
 * Return: void
 */
void err_99(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * main - Entry point
 * @argc: count of argv
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t number_of_bytes;
	char buffer[1024];

	if (argc != 3)
		err_97();
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		err_99(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		close(fd_to), err_98(argv[1]);
	while ((number_of_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		number_of_bytes = write(fd_to, buffer, number_of_bytes);
		if (number_of_bytes == -1)
			close(fd_from), close(fd_to), err_99(argv[2]);
	}

	close(fd_from), close(fd_to);
	return (0);
}
