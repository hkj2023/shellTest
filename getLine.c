#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
	size_t i = 1024;
	char *result;
	result = malloc(1024);
	//for (i  = 0; i <= ac; i++)
	//char *line;
	//ssize_t len;
	//line = malloc(sizeof(char));

	while(1)
	{
		printf("$");
		getline(&result, &i, stdin);
		printf("%s\n", result);
	}
return (0);
}
