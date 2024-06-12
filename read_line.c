#include "shell.h"

/**
 * read_line - Reads a line of input from stdin
 * Return: The input line or NULL on EOF
 */
char *read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
