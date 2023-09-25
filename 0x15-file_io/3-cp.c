#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * main - copy contents of one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to = 0;
	ssize_t rd_count, wr_count = 0;
	char *buffer;
	size_t len =  0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error; Can't write to file %s\n", argv[2]);
		exit(99);
	}
	len = sizeof(argv[1]);
	buffer = malloc(sizeof(char) * len);
	if (buffer == NULL)
		return (-1);
	rd_count = read(fd_from, buffer, len);
	if (rd_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wr_count = write(fd_to, buffer, len);
	if (wr_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if ((close(fd_from)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if ((close(fd_to)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
