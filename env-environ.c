#include "main.h"


int main(int ac, char **av, char **env)
{
	(void) ac;
	(void) av;;
	
	printf("The address of env is %p\n", (void *)env);
	printf("The address of environ is %p\n", (void *)environ);
	return (0);
}
