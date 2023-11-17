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
char *getstat(char *cmd);
void exe(char **av, char **env);
ssize_t get;
void free_v(char *line1, char *line2, char **av);
int i, count;
char *token1, *token2;

#endif
