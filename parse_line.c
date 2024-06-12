#include "shell.h"

/**
 * parse_line - Parses a line of input into arguments
 * @line: The input line
 * Return: An array of arguments
 */
char **parse_line(char *line)
{
	int bufsize = 2;
	char **tokens = malloc(bufsize * sizeof(char *));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " \t\r\n\a");
	tokens[0] = token;
	tokens[1] = NULL;

	return (tokens);
}
