#include "main.h"

/**
 * read_textfile - read text and prints to Posix output
 * @filename: name of file
 * @letters: number of leters it should read and print
 * Return: converted unsigned int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t br, bw;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	br = read(fd, buff, letters);
	if (br == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	bw = write(STDOUT_FILENO, buff, br);
	if (bw == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (br);
}
