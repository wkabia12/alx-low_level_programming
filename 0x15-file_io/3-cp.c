#include "main.h"

/**
 * main - copies file
 * @argc: name of file
 * @argv: content to be written
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t num_read, num_written;
	char buffer[BUFFER_SIZE];
	struct stat st;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	if (stat(argv[1], &st) != 0 || !S_ISREG(st.st_mode) || access(argv[1], R_OK) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s for reading\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s for writing\n", argv[2]);
		exit(99);
	}

	while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		num_written = write(fd_to, buffer, num_read);
		if (num_written != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}

	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
