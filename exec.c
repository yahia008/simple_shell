#include "utils_shell.h"

/**
 * luncher - exceute a comand
 * @argv: the input
 * Return:nothing
 */

void luncher(char **argv)
{
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("wahala");
	}
}
