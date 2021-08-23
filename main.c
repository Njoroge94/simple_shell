#include "main.h"
/**
 * main - call all the functions one by one
 * @ac: number of arguments entered at execution
 * @av: strings of entered arg
 * Return: 0
*/
int main(int ac, char **av)
{
	char *s;

	s = malloc(1024);
	while (1)
	{
		printf("$ ");
		s = get_command();
		if (strcmp(s, "exit\n") == 0)
			break;
		if (strcmp(s, "\n") == 0 || strcmp(s, "\0") == 0)
			continue;
		printf("%s\n", s);
	}
	return (0);
}
