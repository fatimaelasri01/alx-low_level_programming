#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytes = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (bytes = 0; text_content[bytes]; bytes++)
		len = write(fd, text_content, bytes);
	}
	close(fd);

	return ((bytes == len) ? 1 : -1);
}
