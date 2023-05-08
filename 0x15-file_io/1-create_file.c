#include "main.h"

/**
 * create_file - create a file
 * @filename: pointer
 * @text_content: pointer
 *
 * Return: always 0
 */

int create_file(const char *filename, char *text_content)
{
	int h, i, j = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (j = 0; text_content[j];)
	j++;
	}

	h = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(h, text_content, j);

	if (h == -1 || i == -1)
	return (-1);

	close(h);

	return (1);
}


