#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - appends a string to EOF
 * @filename: file to append to
 * @text_content: string to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t wr_count = 0;
	size_t len = 0;
	char *buffer;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND | O_EXCL);
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
	{
		close(fd);
		return (-1);
	}
	strcpy(buffer, text_content);
	wr_count = write(fd, buffer, len);
	if (wr_count == -1)
		return (-1);
	close(fd);
	return (1);
}
