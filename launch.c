#include "shell.h"

extern char **environ;

/**
 * launch - Launches a program
 * @args: Null terminated list of arguments
 * Return: 1 if the shell should continue running, 0 if it should terminate
 */

int launch(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
        if (execve(args[0], args, environ) == -1)
	{
		perror("hsh");
	}
	exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("hsh");
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}
