#include <stdio.h>
#include <stdlib.h>


int main(__attribute__((unused))int ac, char **av)
{
        int i;
        for (i = 1; av[i] != NULL; i++)
        {
                (void)ac;
                printf("%s\n", av[i]);
        }
        return (0);
}
