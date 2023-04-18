#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/errno.h>
#define MAX_CHARS 100
#define MAX_TOKENS 10
char* read_command() {
char* input = (char*)malloc(MAX_CHARS * sizeof(char));
fgets(input, MAX_CHARS, stdin);
input[strcspn(input, "\n")] = '\0';
return input;
}
char** tokenise_command(char* input) {
char** tokens = (char**)malloc(MAX_TOKENS * sizeof(char*));
char* token = strtok(input, " ");
int i = 0; while (token != NULL) {
tokens[i] = token; i++;
token = strtok(NULL, " ");
}
tokens[i] = NULL;
return tokens;
}
void execute_command(char** tokens) {
int status; pid_t pid = fork();
if (pid == 0) {
execvp(tokens[0], tokens);
exit(EXIT_SUCCESS);
} else {
waitpid(pid, &status, 0);
}
}
int main() {
char* input = NULL;
char** tokens = NULL;
while (1) {
printf("$ ");
input = read_command();
tokens = tokenise_command(input);
execute_command(tokens);
free(input);
free(tokens);
}
return 0;
}
