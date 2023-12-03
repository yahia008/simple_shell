#include "utils_shell.h"

/**
 * luncher - exceute a comand
 * @argv: the input
 * Return:nothing
 */

void luncher(char **argv)
{
	if (argv == NULL || argv[0] == NULL)
	{
		perror("anoder error");
		free(argv);
		exit(1);
	}
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("wahala");
		free(argv);
		exit(0);
	}
}
