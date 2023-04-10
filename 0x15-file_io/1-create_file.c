#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to be written
 * Return: 1 on success and -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	struct stat st;
	mode_t perm;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (0);

	if (stat(filename, &st) == -1)
		return (-1);
	perm = st.st_mode & 0777;

	if (fchmod(fd, perm) == -1)
		return (-1);

	write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
