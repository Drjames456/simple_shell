#include "main.h"

/**
 * free_v - A function that free mem.
 * @line1: A string.
 * @line2: A string.
 * @av: An array of strings.
 * Return: Nothing.
 */

void free_v(char *line1, char *line2, char **av)
{
	free(line1);
	free(line2);
	free(av);
}
