#include "main.h"
#include <unistd.h>

/**
 * _strlen - computes length of string
 * @str: string
 *
 * Return: length of str
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: file path to read
 * @text_content: content of file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t number_of_bytes;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		fd = open(filename, O_CREAT | O_TRUNC, 0600);
	else
		fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		number_of_bytes = write(fd, text_content, _strlen(text_content));
		if (number_of_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
