#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *               to the POSIX standard output.
 * @filename: file name.
 * @letters: the number of letters to read and print.
 *
 * Return: the actual number of letters it could read and print.
 *        If it fails returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nbr_rd, nbr_wr;
	char buffer[READ_BUFFER_SIZE * 8];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	if (!(&buffer[0]))
		return (0);

	nbr_rd = read(fd, &buffer[0], letters);
	nbr_wr = write(STDOUT_FILENO, &buffer[0], nbr_rd);

	close(fd);

	return (nbr_wr);
}
