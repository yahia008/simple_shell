#include "utils_shell.h"

/**
 * _strlen - length of string
 * @str: parameter
 * Return: length of string
 */
int _strlen(const char *str)
{
	int len = 0, count = 0;

	while (str[len] !=  '\0')
	{
		count++;
		len++;
	}

	return (len);
}

/**
 * naija_print - Write a string to the standard output
 * @str: the string to be written
 */
void naija_print(const char *str)
{
	size_t len = _strlen(str);

	write(STDOUT_FILENO, str, len);
}
/**
 * free_strips - free all tokens
 * @token: a double pointer
 * Return: nothing
 */
void free_strips(char **token)
{
	int i;

	if (!token)
		return;
	for (i = 0; token[i] != NULL; i++)
	{
		free(token[i]);
	}

	free(token);
}
