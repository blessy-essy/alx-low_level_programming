#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the STDOUT.
 * @filename: the text file to read
 * @letters: number of letters to be read and print
 *
 * Return: actual number of letters it could read and print
 * or 0 is the filename is NULL or if the file can not be opened or read
 * or 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t t, w;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);

	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
