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
	size_t n = 0, len;

	(void)argc;

	while (1)
	{
		write(1, &buff, _strlen(buff));
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

		len = _strlen(input);
		if (len > 0 && input[len - 1] == '\n')
		{
			input[len - 1] = '\0';
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
