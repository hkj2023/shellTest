#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
	pid_t my_ppid;
	my_ppid = getppid();
	printf("%u\n", my_ppid);
	return (0);
}
