#include "holberton.h"
int _strlen(char *s);
/**
 * create_file - Appends text at the end of a file
 * @filename: file name
 * @text_content: Content to append to a file
 *
 * Description: Appends text at the end of a file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, lenght = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	lenght = _strlen(text_content);
	w = write(fd, text_content, lenght);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: The evaluated input
 *
 * Description: Returns the length of a string
 * Return: n value
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
