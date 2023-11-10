#include "main.h"


int main(int ac, char **av, char **env)
{
	char *line = NULL, *linedup = NULL;
	size_t n = 0;
	ssize_t get;
	int i, status, count = 0;
	char *token, *token1;
	pid_t fkrv;
	(void) ac;

	while (1)
	{
		printf("Ædenubuntu$ ");
		get = getline(&line, &n, stdin);
		if (get == -1)
		{
			exit (-1);
			return (0);
		}
		linedup = malloc(sizeof(char) * get);
		if (linedup == NULL)
		{
			return (-1);
		}
		strcpy(linedup, line);
		token = strtok(line, "\n");
		while (token != NULL)
		{
			token = strtok(NULL, "\n");
			count++;
		}
		count++;
		av = malloc(sizeof(char *) * count);
		token1 = strtok(linedup, "\n");
		i = 0;
		while(token1 != NULL)
		{
			av[i] = malloc(sizeof(char) * strlen(token1));
			strcpy(av[i], token1);
			token1 = strtok(NULL, "\n");
			i++;
		}
		av[i] = NULL;
		fkrv = fork();
		if (fkrv == -1)
		{
			perror("Error");
		}
		if (fkrv == 0)
		{
			if (execve(av[0], av, env) == -1)
			{
				perror("Error");
			}
		}
		wait(&status);
		free(line);
		free(linedup);
		free(av);
	}
	return (0);
}