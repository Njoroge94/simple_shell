#include "main.h"
/**
 * execute - creates process and executes it
 * @args: array of split commands
*/
void execute(char **args)
{
	pid_t child_id;

	child_id = fork();
	if (child_id < 0)
	{
		perror("Failed to create a child process");
		exit(1);
	}
	else if (child_id == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("Failed to execute process am the error");
			exit(1);
		}
	}
	else
	{
		wait(NULL);
	}
}
