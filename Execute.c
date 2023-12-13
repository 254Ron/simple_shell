#include "shell.h"
#include <sys/wait.h>
/**
 * execute_command- executes the command given
 * @command: sting to be executed
 **/
void execute_command(const char *command)
{
	pid_t child_t = fork();

	if (child_t == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_t == 0)
	{
		execlp(command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}

}
