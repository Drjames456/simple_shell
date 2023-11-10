#include "main.h"

int main(int ac, char **av)
{
	int i;
	
	printf("ac = %d\n", ac);
	i = 1;
	while (av[i] != NULL)
	{
		printf("av[%d] = %s\n", i, av[i]);
		i++;
	}
	return (0);
}

