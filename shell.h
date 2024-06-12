#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
extern char **environ;

void shell_loop(void);
char *read_line(void);
char **parse_line(char *line);
int execute_command(char **args);

#endif
