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
	int mod = isatty(0);
	char buff[] = "$ ", *input = NULL;
	ssize_t readinput;
	size_t n = 0;
	(void)argc;
	while (1)
	{
		if (mod == 1)
		{
			write(1, &buff, _strlen(buff));
		}
		readinput = getline(&input, &n, stdin);

		if (readinput == -1)
		{
			free(input);
			input = NULL;
			break;
		}
		if (_srt(input, "\n") == 0)
		{
			continue;
		}

		argv = split(input);
		luncher(argv);
		free_strips(argv);
	}
	if (input != NULL)
	{
		free(input);
		input = NULL;
	}
}
