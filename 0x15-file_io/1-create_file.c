#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of the created file
 * @text_content: content for the new created file
 *
 * Return: 1 on Success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t wr_count = 0;
	size_t text_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | O_TRUNC);
	if (fd == -1)
		return (-1);
	text_len = strlen(text_content);
	wr_count = write(fd, text_content, text_len);
	if (wr_count == -1)
		return (-1);
	close(fd);
	return (1);
}
