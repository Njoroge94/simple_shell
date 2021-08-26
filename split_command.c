#include "main.h"
/**
 *count_space - count the number of commands using spaces
 *@s: command string
 *@del: delimiters to cut of the string
 *Return: number of spaces
*/
unsigned int count_space(char *s, char del[])
{
	char *token;
	unsigned int i = 0;

	token = strtok(s, del);
	while (token != NULL)
	{
		token = strtok(NULL, del);
		i++;
	}
	return (i);
}

/**
 * split_token - split command to an array of commands
 * @spltstr: array of split string
 * @s: original string
 * @m: number of delims
 * @del: array of delims
 * Return: array of commands
*/
<<<<<<< HEAD
char **split_token(char **spltstr, unsigned int m ,char *s, char del[])
=======
char **split_token(char **spltstr, m, char *s, char del[])
>>>>>>> 275d943243881f6beed3f90884764014c1621693
{
	char *token;
	unsigned int p_idx = 0;

	token = strtok(s, del);
	while (p_idx < m)
	{
		printf("%s\t%d\n", token, p_idx);
		spltstr[p_idx] = token;
		if (spltstr[p_idx] == NULL)
		{
			while (p_idx > 0)
			{
				free(spltstr[p_idx]);
				p_idx--;
			}
			free(spltstr[0]);
			free(spltstr);
			free(s);
			perror("Failed to allocate memory");
			exit(1);
		}
		if (m - p_idx == 1)
		{
			spltstr[p_idx] = "\0";
		}
		token = strtok(NULL, del);
		p_idx++;
	}
	return (spltstr);
}
/**
 * split_command - takes the command string to substring
 * @buff_str: inputted string
 * @del: delimiters to be checked
 * Return: array of commands
*/
char **split_command(char *buff_str, char del[])
{
	char *tmp_len, *tmp_split, **spltstr;
	unsigned int m;

	tmp_len = strdup(buff_str);
	if (tmp_len == NULL)
	{
		perror("Unable to allocate space");
		exit(1);
	}
	tmp_split = strdup(buff_str);
	if (tmp_split == NULL)
	{
		perror("Unable to allocate space");
		free(tmp_len);
		exit(1);
	}
	
	m = count_space(tmp_len, del);
	tmp_len = '\0';
	free(tmp_len);
	spltstr = malloc(m * sizeof(char));
	if (spltstr == NULL)
	{
		perror("Unable to allocate space");
		free(tmp_split);
		exit(1);
	}
	spltstr = split_token(spltstr, m, tmp_split, del);
	tmp_split = '\0';
	free(tmp_split);
	return (spltstr);
}
