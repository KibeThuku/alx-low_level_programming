#include "main.h"
#include <stdlib.h>

/**
 * A function that reads a text file and prints it to the POSIX standard output
 * @ssize_t - used for a count of bytes or an error indication
 *
 * read_textfile - Reads a text file print to STDOUT
 * @filename: Name of the text file being read
 * @letters: The number of letters to be read in the file
 * Return: w - The actual number of bytes to be read and printed
 *	 0 - When function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/**
	 * @fd -file descriptor
	 */

	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

