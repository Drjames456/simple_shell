#include "main.h"

int main(int ac, char **av, char **env)
{
	int i = 0;
	(void) ac;
	(void) av;
	(void) env;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
