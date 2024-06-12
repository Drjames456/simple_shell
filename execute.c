#include "shell.h"
/**
 * execute_command - A void function that executes.
 * @command: A command to execute.
 * Return: Nothing.
 */

void execute_command(const char *command)
{
	char **args = malloc(2 * sizeof(char *));
	if (args == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	args[0] = strdup(command);
	if (args[0] == NULL)
	{
		perror("strdup");
		exit(EXIT_FAILURE);
	}

	args[1] = NULL;

	execve(command, args, NULL);

	perror("No such file or directory");
	exit(EXIT_FAILURE);
}
