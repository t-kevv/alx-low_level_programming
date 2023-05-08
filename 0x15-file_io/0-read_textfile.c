#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read file
 * @filename: file to be read
 * @letters: number
 *
 * Return: always 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bd;
	ssize_t h, i, j;

	h = open(filename, O_RDONLY);
	if (h == -1)
	return (0);
	bd = malloc(sizeof(char) * letters);
	j = read(h, bd, letters);
	i = write(STDOUT_FILENO, bd, j);

	free(bd);
	close(h);
	return (i);
}



