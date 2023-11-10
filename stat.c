#include "main.h"

int main(int ac, char **av)
{
	struct stat dan;
	int statRv, i = 1;
	(void) ac;

	while (av[i])
	{
		statRv = stat(av[i], &dan);
		if (statRv == 0)
		{
			printf("Daniel is fine\n");
			return (0);
		}
		printf("Not found\n");
		i++;
	}
	return (0);
}
