#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
	pid_t my_pid;
	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}
