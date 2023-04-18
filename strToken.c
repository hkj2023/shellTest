#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int ac, char **av[])
{
	char *buffer = malloc(1024);
	ssize_t len = 1024;
	char *tk;

	while(1)
	{
		printf("$");
		getline(&buffer, &len, stdin);
		printf("The geLine is %s\n", buffer);
		tk = strtok(buffer, " ");
		while(tk)
		{
			printf("The strtok: %s\n", tk);
			tk = strtok(NULL, " ");
		}
	}
	return (0);
}

