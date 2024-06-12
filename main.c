#include "shell.h"

/**
 * main - Entry point for the shell
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */
int main()
{
	shell_loop();
	return (0);
}

/**
 * shell_loop - Main loop of the shell
 */
void shell_loop(void)
{
	char *line;
	char **args;
	int status;

	do {
		printf("> ");
		line = read_line();
		if (line == NULL)
		{
			printf("\n");
			break;
		}
		args = parse_line(line);
		status = execute_command(args);

		free(line);
		free(args);
	} while (status);
}
