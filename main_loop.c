#include "utils_shell.h"

/**
 * prompt - it a void function
 * @argc: count number of command
 * @argv: a double poiinter
 *
 * Return: nothing
 */


void prompt(int argc, char **argv)
{
	char buff[] = "$ ", *input = NULL;
	ssize_t readinput;
	size_t n = 0;

	(void)argc, (void)argv;

	while (1)
	{
		write(1, &buff, _strlen(buff));
		readinput = getline(&input, &n, stdin);

		if (readinput == -1)
		{
			perror("error");
			free(input);
			break;
		}
		if (strcmp(input, "exit\n") == 0)
		{
			free(input);
			break;
		}
		free(input);

	}
	input = NULL;
}
