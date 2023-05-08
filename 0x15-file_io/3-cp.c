#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void close_file(int h);

/**
 * create_buf - creates buf
 * @file: file
 *
 * Return: always 0
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - close file
 * @h: file to be clode
 */

void close_file(int h)
{
	int x;

	x = close(h);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", h);
		exit(100);
	}
}

/**
 * main - copies file content
 * @argc: argument1
 * @argv: argument2
 *
 * Return: always 0
 * Description: argument count
 */

int main(int argc, char *argv[])
{
	int ft, t, p, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buf(argv[2]);
	ft = open(argv[1], O_RDONLY);
	p = read(ft, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (ft == -1 || p == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(t, buf, p);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		p = read(ft, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (p > 0);

	free(buf);
	close_file(ft);
	close_file(t);

	return (0);
}

