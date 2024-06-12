#include "shell.h"

/**
 * main - Entry point of the shell
 *
 * Return: Always 0 (Success)
 */

int main()
{
	char command[MAX_COMMAND_LENGTH];
	int status;

	while (1)
	{
		printf("$ ");

		if (fgets(command, MAX_COMMAND_LENGTH, stdin) == NULL)
		{
			printf("\n");
			break;
		}

		command[strlen(command) - 1] = 0;

		if (access(command, X_OK) != -1)
		{
			pid_t pid = fork();
			if (pid == -1)
			{
				perror("fork");
				exit(EXIT_FAILURE);
			}
			else if (pid == 0)
			{
				execute_command(command);
			}
			else 
			{
				waitpid(pid, &status, 0);
			}
		}
		else 
		{
			fprintf(stderr, "%s: command not found\n", command);
		}
	}
	return 0;
}
