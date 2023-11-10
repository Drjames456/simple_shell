#include "main.h"

int main()
{
	pid_t p, pp;

	p = getpid();
	pp = getppid();

	printf("This is the child pid %u\n", p);
	printf("This is my Father pid(ppid) %u\n", pp);
	return (0);
}
