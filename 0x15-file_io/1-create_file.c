#include "holberton.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: File name
 * @text_content: Content
 * Return: Create file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rd_error, result;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (*(text_content + rd_error))
		{
			rd_error++;
		}
		result = write(fd, text_content, rd_error);
	}
	close(fd);
	if (result >= 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
