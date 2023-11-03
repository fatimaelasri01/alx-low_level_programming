#include "main.h"

/**
 * create_file - creates a file.
 * @filename: file name.
 * @text_content: null terminated string to be write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytes = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (bytes = 0; text_content[bytes] != '\0'; bytes++)
			;
		len = write(fd, text_content, bytes);
	}
	close(fd);

	return ((bytes == len) ? 1 : -1);
}
