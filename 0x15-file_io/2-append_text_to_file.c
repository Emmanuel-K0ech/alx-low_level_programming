#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to append to
 * @text_content: string to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t wr_count = 0;
	size_t text_len = 0;

	if (text_content == NULL)
	{
		if (filename == NULL)
			return (-1);
		else
			return (1);
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	text_len = strlen(text_content);
	wr_count = write(fd, text_content, text_len);
	if (wr_count == -1)
		return (-1);
	close(fd);
	return (1);
}
