#include "holberton.h"
/**
 * read_textfile - Reads a text file
 * @filename: file
 * @letters:  is the number of letters it should read and print
 *
 * Description: Reads a text file and prints it to the POSIX
 * standard output
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer[letters];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
		return (0);
	close(fd);
	return (w);
}
