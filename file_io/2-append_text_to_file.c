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
 * append_text_to_file - appends text at the end of a file
 * @filename: file path to add
 * @text_content: content to add file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t number_of_bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
