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
	char **env = environ;
	unsigned int len;

	i = _strlen(path);
	
	while (*env != NULL)
	{
		if (_strn(*env, path, i) == 0 && (*env)[i] == '=')
		{
			return (*env + len + 1);	
		}
		env++;
	}
	return(NULL);
}
