#include "main.h"
/**
 * main - The main function
 * @ac : Argument count.
 * @av : Argurment vector.
 * @env: Environment variable.
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	char *line1 = NULL, *line2 = NULL;
	size_t n = 0;
	(void)ac;

	while (1)
	{
		printf("Ædenubuntu$ ");
		get = getline(&line1, &n, stdin);
		if (get == -1)
		{
			exit(0);
			return (0);
		}
		line2 = malloc(sizeof(char) * get);
		if (line2 == NULL)
		{
			return (-1);
		}
		strcpy(line2, line1);
		token1 = strtok(line1, " \n");
		count = 0;
		while (token1)
		{
			token1 = strtok(NULL, " \n");
			count++;
		}
		av = malloc(sizeof(char *) * count);
		token2 = strtok(line2, " \n");
		i = 0;
		while (token2)
		{
			av[i] = malloc(sizeof(char) * strlen(token2));
			strcpy(av[i], token2);
			token2 = strtok(NULL, " \n");
			i++;
		}
		av[i] = NULL;
		exe(&av[0], env);
	}
	free_v(line1, line2, av);
	return (0);
}
