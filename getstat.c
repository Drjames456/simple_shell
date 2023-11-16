#include "main.h"
/**
 * getstat - A function that adds path and stat a command.
 * @cmd: A command
 * Return: A string.
 */

char *getstat(char *cmd)
{
	char *path, *path_cpy, *get_token, *filepath;
	struct stat buf;
	int cmd_len;

	path = getenv("PATH");
	path_cpy = strdup(path);
	cmd_len = strlen(cmd);
	get_token = strtok(path_cpy, ":");
	while (get_token)
	{
		filepath = malloc(sizeof(strlen(get_token) + cmd_len + 2));
		strcpy(filepath, get_token);
		strcat(filepath, "/");
		strcat(filepath, cmd);
		strcat(filepath, "\0");
		if (stat(filepath, &buf) == 0)
		{
			free(path_cpy);
			return (filepath);
		}
		else
		{
			free(filepath);
			get_token = strtok(NULL, ":");
		}
	}
	free(path_cpy);
	if (stat(cmd, &buf) == 0)
	{
		return (cmd);
	}
	return (NULL);
}
