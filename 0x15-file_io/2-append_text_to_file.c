#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: pointer
 * @text_content: text
 *
 * Return: always 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int h, i, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	h = open(filename, O_WRONLY | O_APPEND);
	i = write(h, text_content, l);

	if (h == -1 || i == -1)
		return (-1);

	close(h);

	return (1);
}

