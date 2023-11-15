#include "main.h"

void exe(char **av, char **env)
{
	char *command;
	int status, stsrv;
	pid_t fkrv;
	struct stat buf;
	
	stsrv = stat(av[0], &buf);
	if (stsrv == 0)
	{
		fkrv = fork();
		if (fkrv == -1)
		{
			perror("Error:");
		}
		if (fkrv == 0)
		{
			if (execve(av[0], av, env) == -1)
			{
				perror("Error:");
			}
		}
		wait(&status);
	}
	else
	{
		command = getstat(av[0]);
		if(stat(command, &buf) == 0)
		{
			fkrv = fork();
			if (fkrv == -1)
			{
				perror("Error:");
			}
			if (fkrv == 0)
			{
				if (execve(command, av, env) == -1)
				{
					perror("Error:");
				}
			}
			wait(&status);
		}
	}
}

