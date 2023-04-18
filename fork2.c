#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int main(int ac, char **av[])
{
pid_t pid;
pid_t child_pid;
child_pid = fork();

if (child_pid == -1)
{
	perror("Error");
	return (1);
}

pid = getpid();
printf("My pid is %u\n", pid);
if (child_pid  == 0)
{
	printf("(%u) Noooooooo!\n", pid);
}
else
{
	printf("(%u) %u, I am your father\n", pid, child_pid);
}
return (0);
}
