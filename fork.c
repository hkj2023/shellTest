#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int main(int ac, char **av[])
{
pid_t my_pid;
pid_t pid;
printf("Before fork\n");
pid = fork();
if (pid == -1)
{
	perror("Error");
	return (1);
}
printf("After fork\n");
my_pid = getpid();
printf("My pid is %u\n", my_pid);
return (0);
}
