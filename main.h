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

#endif
