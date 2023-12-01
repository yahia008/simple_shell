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
	char buff[] = "$ ";
	(void)argc, (void)argv;

	write(1, &buff, _strlen(buff));

}
