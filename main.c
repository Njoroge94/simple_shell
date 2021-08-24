#include "main.h"
/**
 * main - call all the functions one by one
 * @ac: number of arguments entered at execution
 * @av: strings of entered arg
 * Return: 0
*/
int main(int ac, char **av)
{
	char *s = '\0';
	char **args;
	int i = 0;
	s = malloc(1024);
	while (1)
	{
		printf("#cisfun$ ");
		s = get_command();
		if (strcmp(s, "exit\n") == 0)
			break;
		if (strcmp(s, "\n") == 0 || strcmp(s, "\0") == 0)
			continue;
		args = split_command(s, " \n\t");
		free(s);
		s = '\0';

	
	}
	return (0);
}
