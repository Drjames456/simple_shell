#include "main.h"

/**
 * exe - A function that execute commands
 * @av: Argument vectors
 * @env: Environment variables
 * Return: Nothing.
 */

void exe(char **av, char **env)
{
	char *command, *comm;
	int status;
	pid_t fkrv;

	if (av)
	{
		command = av[0];
		comm = getstat(command);
		fkrv = fork();
		if (fkrv == -1)
		{
			perror("Error:");
		}
		if (fkrv == 0)
		{
			execve(comm, av, env);
		}
		wait(&status);
	}
}
