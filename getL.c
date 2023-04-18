       #include <stdio.h>
       #include <stdlib.h>

       int main(int argc, char *argv[])
       {
       char *buff;
       ssize_t len;
       ssize_t buff_size = 64;
       buff = (char*)malloc(buff_size * sizeof(char));
       if (buff == NULL)
       {
	       perror("Unable to allocate buffer");
	       exit(90);
       }
       
       printf("$");
       len = getline(&buff, &buff_size, stdin);
       printf("The file is %zu\n", len);
       printf("You typed '%s'\n", buff);
       return(0);
       }
