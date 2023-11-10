#include "main.h"

int main(void)
{
	pid_t fkv;
	int status;
	char *av[] = {"/bin/ls", "-l", "/tmp", NULL};

		fkv = fork();
		if (fkv == -1)
		{
			perror("Error\n");
			return (0);
		}
		if (fkv == 0)
		{
			if (execve(av[0], av, NULL) == -1)
			{
				perror("Error");
			}
		}
		wait(&status);
		return (0);
}

