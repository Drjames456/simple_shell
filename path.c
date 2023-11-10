#include "main.h"

int main()
{
	char *get;
	char *stk;

	get = getenv("PATH");
	stk = strtok(get, ":");
	while (stk)
	{
		printf("%s\n", stk);
		stk = strtok(NULL, ":");
	}
	return (0);
}
