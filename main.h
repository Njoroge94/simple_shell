#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *split_command(char *s);
char *get_command(void);
void execute(char *s);
#endif
