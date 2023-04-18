#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int main(int ac, char **av[])
{
	char *argv[] = {"/bin/ls", "-l", "/usr", NULL};
	printf("Before execve\n");
	if(execve(argv[0], argv, NULL) == -1)
	{
		perror("error");
	}
	printf("After exece'n");
return (0);
}

