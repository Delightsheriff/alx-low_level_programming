#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * @filename: name of the file
 * @letters: contents of the file
 *
 * Return: size of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, temp;
	char *buffer = malloc(sizeof(char *) * letters);

	if (buffer == NULL)
		return (0);

	if (filename == 0)
		return (0);

	file = open(filename, O_RDONLY, 0600);
	if (file == -1)
		return (0);

	temp = read(file, buffer, letters);
	write(STDOUT_FILENO, buffer, temp);

	free(buffer);
	close(file);
	return (temp);
}
