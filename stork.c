#include "main.h"

int main()
{
	char *store;
	char *str = NULL;
	size_t n = 0;

	getline(&str, &n, stdin);

	store = strtok(str, " ");
	while (store)
	{
		printf("The word is %s\n", store);
		store = strtok(NULL, " ");
	}
	return (0);
}
