#include "utils_shell.h"
/**
 * _strn - compare string
 * @s1: a pointer to comapre
 * @s2: second ponter
 * @n: maximum number
 * Return: return integer
 */

int _strn(char *s1, const char *s2, unsigned int n)
{
	while(*s1 == *s2 && --n && *s1)
	{
		s1++, s2++;
	}
	return (*s1 - *s2);
}

/**
 * _getenv - get path
 * @path: give the path
 * Return: path and NULL
 */
char *my_getenv(const char *path)
{
	extern char **environ;
	int i;

	i = _strlen(path);
	
	while (*environ != NULL)
	{
		if (_strn(*environ, path, i) == 0 && (*environ)[i] == '=')
		{
			return (*environ + i + 1);
		}
		environ++;
	}
	return(NULL);
}
