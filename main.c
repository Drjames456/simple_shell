#include "shell.h"

/**
 * main - Entry point of the shell
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *line;
	char **args;
	int status;

	do {
		printf("#cisfun$ ");
		line = read_line();
		if (line == NULL)
		{
			printf("\n");
			break;
		}
		args = split_line(line);
		status = execute(args);

		free(line);
		free(args);
	} while (status);

	return (0);
}

