#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


void prompt(int argc, char **argv);
int _strlen(const char *str);
char **split(char *line);
void  luncher(char **argv);

#endif
