#include "utils_shell.h"

/**
 * split - tokenixe a string
 * @line: input be tokenize
 * Return: returns a pointer
 */

#define BUFSIZE 64
#define TOK_DELIM " \t\r\n\a"
#define TOKEN_SIZE 20
char **split(char *line)
{
	char *strip;
	int buff = BUFSIZE, position = 0;
	char **tokens;

	tokens = malloc(buff * sizeof(char *));

	if (!tokens)
	{
		perror("error");
		exit(1);
	}

	strip = strtok(line, TOK_DELIM);

	while (strip != NULL)
	{
		if (position >= buff)
		{
			perror("smtin wrong");
			exit(1);
		}

		tokens[position] = malloc((TOKEN_SIZE + 1) * sizeof(char));

		if (!tokens[position])
		{
			perror("no memeor");
			exit(1);
		}

		strcpy(tokens[position], strip);
		tokens[position][TOKEN_SIZE] = '\0';
		position++;

		strip = strtok(NULL, TOK_DELIM);
	}
	tokens[position] = NULL;
	return (tokens);
}
