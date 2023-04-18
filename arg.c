#include <stdio.h>
#include <stdlib.h>


int main(int ac, char **av)
{
	int i;
	for (i = 0; i < ac; i++)
	{
		(void)ac;
		printf("%s\n", av[i]);
	}
	return (0);
}
