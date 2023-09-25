#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file - creates a new file to write
 * @filename: name of file  to create
 * @text_content: string to write to file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd1, fd2, len = 0;
	ssize_t rd_count, wr_count = 0;
	char *buffer;

	if (filename == NULL)
		return (-1);
	fd1 = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd1 == -1)
		return (-1);
	fd2 = open(text_content, O_RDONLY);
	if (fd2 == -1)
	{
		close(fd1);
		return (-1);
	}
	len = strlen(text_content);
	buffer = malloc((sizeof(char) * len) + 1);
	if (buffer == NULL)
		return (-1);
	rd_count = read(fd2, buffer, len);
	if (rd_count == -1)
	{
		free(buffer);
		return (-1);
	}
	wr_count = write(fd1, buffer, len);
	if (wr_count == -1)
	{
		free(buffer);
		return (-1);
	}
	close(fd1);
	close(fd2);
	return (1);
}
