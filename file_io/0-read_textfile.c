#include "main.h"


/**
* read_textfile - reads a text file and prints to POSIX standard output.
* @filename: pointer to the name of the file to read.
* @letters: number of letters it should read and print.
* Return: the actual number of letters it could read and print.
*         0 if the file cannot be opened or read,
*         or if filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL) /* Check if filename is NULL */
	return (0);

	int fd;

	ssize_t r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters); /* Allocate memory for buffer */
	if (buffer == NULL)
	return (0);

	fd = open(filename, O_RDONLY); /* Open the file in read-only mode */
	if (fd == -1)
	{
	free(buffer);
	return (0);
	}
}

