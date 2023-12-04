#include "utils_shell.h"

/**
 * luncher - exceute a comand
 * @argv: the input
 * Return:nothing
 */

void luncher(char **argv)
{
	pid_t wpid;

	if (argv == NULL || argv[0] == NULL)
	{
		perror("anoder error");
		exit(1);
	}
	wpid = fork();
	if (wpid < 0)
	{
		perror(argv[0]);
		exit(-1);
	}
	if (wpid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("wahala");
			exit(-1);
		}
	}
	else
	{
		waitpid(wpid, NULL, 0);

	}
}
