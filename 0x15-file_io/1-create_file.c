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
	int fd, len = 0;
	ssize_t wr_count = 0;
	char *buffer;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = strlen(text_content);
	buffer = malloc((sizeof(char) * len) + 1);
	if (buffer == NULL)
		return (-1);
	strcpy(buffer, text_content);
	wr_count = write(fd, buffer, len);
	if (wr_count == -1)
		return (-1);
	close(fd);
	return (1);
}
