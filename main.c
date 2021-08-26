#include "main.h"
/**
 * main - call all the functions one by one
 * @ac: number of arguments entered at execution
 * @av: strings of entered arg
 * Return: 0
*/
int main(void)
{
	char *s = '\0';
	size_t buff_size = 0;
	char **args;
	int i = 0;
	int check = 1;
	unsigned int m;

	while (check != -1)
	{
		printf("#cisfun$ ");
		check = getline(&s, &buff_size, stdin);
		if (strcmp(s, "exit\n") == 0)
			break;
		if (strcmp(s, "\n") == 0 || strcmp(s, "\0") == 0)
			continue;
		args = split_command(s, " \n\t");
		printf("%u\n", m);
		free(s);
		s = '\0';
		execute(args);
		free(args);
		args = '\0';
		i++;
	}
	return (0);
}
