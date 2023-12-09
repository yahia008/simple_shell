#include "utils_shell.h"
/**
 * strcop - copy a string
 * @dest: destination to copy
 * @src: source to copy from
 * Return: a pointer
 */

char *strcop(char *dest, const char *src)
{
	char *ptr;
	if (dest == NULL)
	{
		return (NULL);
	}
	ptr = dest;
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
