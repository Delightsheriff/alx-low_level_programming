#include "main.h"

/**
 * append_text_to_file - funvtion that appends text at the end  of  a file
 * @filename: filename
 * @text_content: contents for the file
 *
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		if (write(file, text_content, strlen(text_content)) == -1)
			return (-1);
	}

	close(file);
	return (1);
}
