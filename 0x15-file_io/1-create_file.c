#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
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

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = '\0';
	fd = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	wr_count = write(fd, text_content, sizeof(text_content));
	if (wr_count == -1)
		return (-1);
	close(fd);
	return (1);
}
