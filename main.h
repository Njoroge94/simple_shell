#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char **split_command(char *buff_str, char del[]);
char *get_command(void);
void execute(char **args);
#endif
