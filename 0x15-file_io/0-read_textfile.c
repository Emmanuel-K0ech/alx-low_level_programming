#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to STDOUT_FILENO
 * @filename: file being read
 * @letters: number of letters it should read and print
 *
 * Return: number of letter read and printed of 0 IF null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t rd_count, wr_count = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc((sizeof(char) * letters) + 1);
	if (buffer == NULL)
		return (0);
	rd_count = read(fd, buffer, letters);
	if (rd_count == -1)
	{
		close(fd);
		return (0);
	}
	buffer[rd_count] = '\0';
	wr_count = write(STDOUT_FILENO, buffer, rd_count);
	if (wr_count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (wr_count);
}
