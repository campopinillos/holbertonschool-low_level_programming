#include "holberton.h"
int _strlen(char *s);
/**
 * create_file - Create a function that creates a file
 * @filename: file name
 * @text_content: Content to file
 *
 * Description: Create a function that creates a file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, lenght = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	else
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
