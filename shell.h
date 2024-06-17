#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define TOK_BUFSIZE 64
#define TOK_DELIM " \t\r\n\a"

int launch(char **args);
int execute(char **args);
void print_env(void);
char *read_line(void);
char **split_line(char *line);
int execute(char **args);
void print_env(void);
extern char **environ;

#endif
