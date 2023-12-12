#include "utils_shell.h"

/**
 * main - the entry point of the shell
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 1)
	{
		fprintf(stderr, "Usage: %s\n", argv[0]);
		exit(1);
	}

	prompt(argc, argv);

	return (0);
}
