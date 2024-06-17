#include "shell.h"
/**
 * execute - Executes a shell built-in or launches a program
 * @args: Null terminated list of arguments
 *
 * Return: 1 if the shell should continue running, 0 if it should terminate
 */
int execute(char **args)
{
	if (args == NULL || args[0] == NULL)
	{
		fprintf(stderr, "hsh: No such file or directory\n");
		return (1);
	}

	return (launch(args));
}
