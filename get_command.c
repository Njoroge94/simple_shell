#include "main.h"
/**
 * get_command - takes in command from the user using getline func
 * Return: Entered string
*/
char *get_command(void)
{
	size_t len = 1024;
	char *buffer;

	buffer = malloc(len);
	if (buffer == NULL)
	{
		perror("Unable to create space for command");
		exit(1);
	}
	getline(&buffer, &len, stdin);
	return (buffer);
	free(buffer);
}
