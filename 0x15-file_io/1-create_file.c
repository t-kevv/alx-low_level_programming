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
	int h, i, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
	}

	h = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (h == -1)
		return (-1);

	if (text_content != NULL)
	{
		i = write(h, text_content, l);
		if (i == -1)
		{
			close(h);
			return (-1);
		}
	}
	if (close(h) == -1)
		return (-1);
	return (1);
}



