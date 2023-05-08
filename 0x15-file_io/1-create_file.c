#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: filename
 * @text_content: contents for the file
 *
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int file, temp = 1;
	ssize_t bytes = 0;
	size_t length = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		length = strlen(text_content);
		bytes = write(file, text_content, length);
		if (bytes != (ssize_t) length)
			temp = -1;
	}
	close(file);
	return (temp);
}
