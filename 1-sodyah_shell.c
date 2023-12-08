#include "utils_shell.h"

/**
 * main - the entry point of the shell
 * Return: 0
 */
int main(void)
{
	char usr_input[MAX_COMMD_LENGT];

	while (1)
	{
		show_shell_prompts();

		if (fgets(usr_input, sizeof(usr_input), stdin) == NULL)
		{
			if (isatty(STDIN_FILENO))
			{
				prompt("\n"); /* Handles eof (Ctrl+d) */
			}

			break;
		}

		size_t len = strlen(usr_input);

		if (len > 0 && usr_input[len - 1] == '\n')
		{
			usr_input[len - 1] = '\0';
		}

		execute_command(usr_input);
	}

	return (0);
}
