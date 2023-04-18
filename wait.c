#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(int ac, char **av[])
{
int status;
pid_t child_pid;
child_pid = fork();

if (child_pid == -1)
{
        perror("Error");
        return (1);
}

if (child_pid  == 0)
{
        printf("Wait for me, wait for me!\n");
	sleep(3);
}
else
{
       
       wait(&status);
       printf("Oh!, it's all better now!\n");
}
return (0);
}

