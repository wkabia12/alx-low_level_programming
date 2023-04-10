#include "main.h"

/**
 * append_text_to_file - appends to file
 * @filename: name of file
 * @text_content: content to be written
 * Return: 1 on success and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_WRONLY | O_APPEND | O_EXCL);
	if (fd == -1)
		return (0);

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
