#include "utils_shell.h"

/**
 * prompt - interactive mode function
 * @argc: argument count
 * @argv: argument vector
 * Return: Nothing
 */
void prompt(int argc, char **argv)
{
	char buff[] = "$ ", *input = NULL;
	size_t n = 0;

	(void)argc;
	(void)argv;

	size_t readinput;

	while (1)
	{
		write(STDOUT_FILENO, &buff, _strlen(buff));

		readinput = getline(&input, &n, stdin);

		if (readinput == -1)
		{
			free(input);
			input = NULL;
		}

		if (_srt(input, "exit") == 0)
		{
			free(input);
			break;
		}
		else
		{
			char **command_args = split(input);
			luncher(command_args);
			free_strips(command_args);
		}

	}
}
